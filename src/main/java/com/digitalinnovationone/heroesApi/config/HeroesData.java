package com.digitalinnovationone.heroesApi.config;

import com.amazonaws.client.builder.AwsClientBuilder;
import com.amazonaws.services.dynamodbv2.AmazonDynamoDB;
import com.amazonaws.services.dynamodbv2.AmazonDynamoDBClientBuilder;
import com.amazonaws.services.dynamodbv2.document.DynamoDB;
import com.amazonaws.services.dynamodbv2.document.Item;
import com.amazonaws.services.dynamodbv2.document.PutItemOutcome;
import com.amazonaws.services.dynamodbv2.document.Table;
import org.springframework.stereotype.Component;

import static com.digitalinnovationone.heroesApi.constants.HeroesConstant.ENDPOINT_DYNAMO;
import static com.digitalinnovationone.heroesApi.constants.HeroesConstant.REGION_DYNAMO;

/*https://docs.aws.amazon.com/pt_br/amazondynamodb/latest/developerguide/JavaDocumentAPIItemCRUD.html*/

@Component
public class HeroesData {

    public static void main(String[] args) throws Exception {

        AmazonDynamoDB client = AmazonDynamoDBClientBuilder.standard()
                .withEndpointConfiguration(new AwsClientBuilder.EndpointConfiguration(ENDPOINT_DYNAMO, REGION_DYNAMO))
                .build();
        DynamoDB dynamoDB = new DynamoDB(client);

        Table table = dynamoDB.getTable("Heroes_Table");

        Item hero = new Item()
                .withPrimaryKey("id", 1)
                .withString("name", "Wonder Woman")
                .withString("universe", "DC Comics")
                .withNumber("films", 59);

        Item hero2 = new Item()
                .withPrimaryKey("id", 2)
                .withString("name", "Jessica Jones")
                .withString("universe", "Marvel")
                .withNumber("films", 39);

        Item hero3 = new Item()
                .withPrimaryKey("id", 3)
                .withString("name", "Mystique")
                .withString("universe", "Marvel")
                .withNumber("films", 52);

        Item hero4 = new Item()
                .withPrimaryKey("id", 4)
                .withString("name", "Superman")
                .withString("universe", "DC Comics")
                .withNumber("films", 6);

        Item hero5 = new Item()
                .withPrimaryKey("id", 5)
                .withString("name", "Wolverine")
                .withString("universe", "Marvel")
                .withNumber("films", 26);

        /* Insere item na tabela */
        PutItemOutcome outcome = table.putItem(hero);
        PutItemOutcome outcome2 = table.putItem(hero2);
        PutItemOutcome outcome3 = table.putItem(hero3);
        PutItemOutcome outcome4 = table.putItem(hero4);
        PutItemOutcome outcome5 = table.putItem(hero5);

    }
}

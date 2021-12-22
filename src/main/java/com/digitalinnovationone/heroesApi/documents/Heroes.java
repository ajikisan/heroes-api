package com.digitalinnovationone.heroesApi.documents;

import com.amazonaws.services.dynamodbv2.datamodeling.DynamoDBAttribute;
import com.amazonaws.services.dynamodbv2.datamodeling.DynamoDBHashKey;
import com.amazonaws.services.dynamodbv2.datamodeling.DynamoDBTable;
import org.springframework.data.annotation.Id;

import lombok.Data;
import lombok.Setter;
import lombok.Getter;
import lombok.NoArgsConstructor;

@SuppressWarnings("unused")
@Data
@Getter
@Setter
@NoArgsConstructor
@DynamoDBTable(tableName = "Heroes_Table")

public class Heroes {
    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getUniverse() {
        return universe;
    }

    public void setUniverse(String universe) {
        this.universe = universe;
    }

    public Integer getFilms() {
        return films;
    }

    public void setFilms(Integer films) {
        this.films = films;
    }

    @Id
    @DynamoDBHashKey (attributeName = "id")
    private Integer id;

    @DynamoDBAttribute (attributeName = "name")
    private String name;

    @DynamoDBAttribute (attributeName = "universe")
    private String universe;

    @DynamoDBAttribute (attributeName = "films")
    private Integer films;


    public Heroes(Integer id, String name, String universe, Integer films) {
        this.id = id;
        this.name = name;
        this.universe = universe;
        this.films = films;
    }


}
package com.digitalinnovationone.heroesApi;

import com.digitalinnovationone.heroesApi.repository.HeroesRepository;
import org.junit.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.test.web.reactive.server.WebTestClient;
import org.springframework.boot.test.autoconfigure.web.reactive.AutoConfigureWebTestClient;
import org.springframework.boot.test.context.SpringBootTest;
import org.junit.runner.RunWith;
import org.springframework.http.MediaType;
import org.springframework.test.annotation.DirtiesContext;
import org.springframework.test.context.junit4.SpringRunner;


import static com.digitalinnovationone.heroesApi.constants.HeroesConstant.HEROES_ENDPOINT_LOCAL;

@RunWith(SpringRunner.class)
@SpringBootTest
@AutoConfigureWebTestClient
@DirtiesContext


public class HeroesApiApplicationTests {

    @Autowired
    WebTestClient webTestClient;

    @Autowired
    HeroesRepository heroesRepository;


    @Test
    public void getOneHeroById() {

        webTestClient.get().uri(HEROES_ENDPOINT_LOCAL.concat("/{id}"), "5")
                .exchange()
                .expectStatus().isOk()
                .expectBody();


    }

    @Test
    public void getOneHeroNotFound() {

        webTestClient.get().uri(HEROES_ENDPOINT_LOCAL.concat("/{id}"), "36")
                .exchange()
                .expectStatus().isNotFound();

    }


    @Test
    public void deleteHero() {

        webTestClient.delete().uri(HEROES_ENDPOINT_LOCAL.concat("/{id}"), "4")
                .accept(MediaType.APPLICATION_JSON)
                .exchange()
                .expectStatus().isNotFound()
                .expectBody(Void.class);

    }

    @Test
    public void getAllHero() {

        webTestClient.get().uri(HEROES_ENDPOINT_LOCAL)
                .accept(MediaType.APPLICATION_JSON)
                .exchange()
                .expectStatus().isOk()
                .expectBody();

    }

}

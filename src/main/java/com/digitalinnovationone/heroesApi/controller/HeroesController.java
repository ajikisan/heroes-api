package com.digitalinnovationone.heroesApi.controller;

import com.digitalinnovationone.heroesApi.documents.Heroes;
import com.digitalinnovationone.heroesApi.repository.HeroesRepository;
import com.digitalinnovationone.heroesApi.service.HeroesService;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;
import reactor.core.publisher.Flux;
import reactor.core.publisher.Mono;
import lombok.extern.slf4j.Slf4j;

import static com.digitalinnovationone.heroesApi.constants.HeroesConstant.HEROES_ENDPOINT_LOCAL;


@RestController
// @Slf4j

public class HeroesController {

    HeroesService heroesService;
    HeroesRepository heroesRepository;

    private static final org.slf4j.Logger log =
            org.slf4j.LoggerFactory.getLogger(HeroesController.class);

    public HeroesController(HeroesService heroesService, HeroesRepository heroesRepository) {
        this.heroesService = heroesService;
        this.heroesRepository = heroesRepository;
    }

    @ResponseStatus(HttpStatus.OK)
    @GetMapping(HEROES_ENDPOINT_LOCAL)
    public Flux<Heroes> getAllItems() {
        log.info("Heróis de todos os universos.");
        return heroesService.findAll();

    }

    @GetMapping(HEROES_ENDPOINT_LOCAL + "/id")
    public Mono<ResponseEntity<Heroes>> findByIdHero(@PathVariable String id) {
        log.info("Seleção de um herói pelo número id {}", id);
        log.info(id, "id {} Herói inexistente");
        return heroesService.findByIdHero(id)
                .map((item)-> new ResponseEntity<>(item, HttpStatus.OK))
                .defaultIfEmpty(new ResponseEntity<>(HttpStatus.NOT_FOUND));
    }

    @PostMapping(HEROES_ENDPOINT_LOCAL)
    @ResponseStatus(code=HttpStatus.CREATED)
    public Mono<Heroes> createHero(@RequestBody Heroes heroes) {
        log.info("Criação de um novo herói na tabela {} com número id {}", heroes.getName(), heroes.getId());
        return heroesService.save(heroes);

    }

    @DeleteMapping(HEROES_ENDPOINT_LOCAL + "/id")
    @ResponseStatus(code=HttpStatus.OK)
    public Mono<HttpStatus> deleteByIdHero(@PathVariable String id) {
        heroesService.deleteByIdHero(id);
        log.info("Remoção de herói pelo número id {}", id);
        return Mono.just(HttpStatus.OK);
    }
}

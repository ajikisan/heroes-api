package com.digitalinnovationone.heroesApi.repository;

import com.digitalinnovationone.heroesApi.documents.Heroes;
import org.socialsignin.spring.data.dynamodb.repository.EnableScan;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;


@Repository
@EnableScan
public interface HeroesRepository extends CrudRepository<Heroes,String> {

}

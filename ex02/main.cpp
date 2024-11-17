/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:27:28 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 18:45:24 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"
#include "Wrong.hpp"

int main()
{
    const int totalAnimals = 10;
    Animal* animals[totalAnimals];
    for (int i = 0; i < totalAnimals; i++) {
        if (i < totalAnimals / 2) {
            animals[i] = new Dog();
            if (!animals[i]) {
                perror("New a Dog object failed");
                std::cerr << "Exiting...";
                exit(1);
            }
        }
        else
            animals[i] = new Cat();
            if (!animals[i]) {
                perror("New a Cat object failed");
                std::cerr << "Exiting...";
                exit(1);
            }
    }
    std::cout << std::endl;
    std::cout << "\033[34mTesting Pure Virtual functions of Animal objects...\033[0m" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Animal type: " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }

    std::cout << std::endl;
    std::cout << "\033[34mTesting Subtype polymorphism of Animal objects...\033[0m" << std::endl;
    Brain *br;
    br = &animals[0]->getBrain();
    br->setIdea("Eat sausage. ", 0);
    br->setIdea("Swim in the sea. ", 1);
    br->setIdea("Jump to Mars. ", 2);
    std::cout << animals[0]->getBrain().getIdea(0) << std::endl;
    std::cout << animals[0]->getBrain().getIdea(1) << std::endl;
    std::cout << animals[0]->getBrain().getIdea(2) << std::endl;
    
    std::cout << std::endl;
    std::cout << "\033[34mTesting deep copy of Dog class with copy constructor...\033[0m" << std::endl;
    Dog *oldDog = new Dog;
    oldDog->getBrain().setIdea("Hotdog is yummy. ", 0);
    Dog *newDog = new Dog(*oldDog);
    newDog->getBrain().setIdea("Hotdog sucks!", 0);
    std::cout << "oldDog's Brain idea:\033[31m " << oldDog->getBrain().getIdea(0) << "\033[0m" << std::endl;
    std::cout << "newDog's Brain idea:\033[32m " << newDog->getBrain().getIdea(0) << "\033[0m" << std::endl;
    delete oldDog;
    delete newDog;

    std::cout << std::endl;
    std::cout << "\033[34mTesting deep copy of Dog class with reloaded assignment operator...\033[0m" << std::endl;
    Dog *oldDog2 = new Dog;
    oldDog2->getBrain().setIdea("Swim! ", 0);
    std::cout << "oldDog's Brain idea:\033[31m " << oldDog2->getBrain().getIdea(0) << "\033[0m" << std::endl;
    Dog *newDog2 = new Dog;
    newDog2->getBrain().setIdea("Play ball. ", 0);
    std::cout << "newDog's original Brain idea:\033[32m " << newDog2->getBrain().getIdea(0) << "\033[0m" << std::endl;
    *newDog2 = *oldDog2;
    std::cout << "newDog's current Brain idea:\033[31m " << newDog2->getBrain().getIdea(0) << "\033[0m" << std::endl;
    delete oldDog2;
    delete newDog2;

    std::cout << std::endl;
    std::cout << "\033[34mTesting deep copy of Cat class with copy constructor...\033[0m" << std::endl;
    Cat *oldCat3 = new Cat;
    oldCat3->getBrain().setIdea("canned meat is yummy. ", 0);
    Cat *newCat3 = new Cat(*oldCat3);
    newCat3->getBrain().setIdea("Canned meat sucks!", 0);
    std::cout << "oldCat's Brain idea:\033[31m " << oldCat3->getBrain().getIdea(0) << "\033[0m" << std::endl;
    std::cout << "newCat's Brain idea:\033[32m " << newCat3->getBrain().getIdea(0) << "\033[0m" << std::endl;
    delete oldCat3;
    delete newCat3;
    
    std::cout << std::endl;
    std::cout << "\033[34mTesting deep copy of Cat class with reloaded assignment operator...\033[0m" << std::endl;
    Cat *oldCat4 = new Cat;
    oldCat4->getBrain().setIdea("Catch birds! ", 0);
    std::cout << "oldCat's Brain idea:\033[31m " << oldCat4->getBrain().getIdea(0) << "\033[0m" << std::endl;
    Cat *newCat4 = new Cat;
    newCat4->getBrain().setIdea("Sleep. ", 0);
    std::cout << "newCat's original Brain idea:\033[32m " << newCat4->getBrain().getIdea(0) << "\033[0m" << std::endl;
    *newCat4 = *oldCat4;
    std::cout << "newCat's current Brain idea:\033[31m " << newCat4->getBrain().getIdea(0) << "\033[0m" << std::endl;
    delete oldCat4;
    delete newCat4;

    std::cout << std::endl;
    std::cout << "\033[34mloop over and delete every Animal...\033[0m" << std::endl;
    for (int i = 0; i < totalAnimals; i++)
        delete animals[i];
    
    /*
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();

    std::cout << std::endl;
    const Animal* jcopy1 = j; // 简单指针拷贝,指向同一对象,不需要也不应该 delete jcopy1
    const Dog* dogPtr = dynamic_cast<const Dog*>(j);
    const Animal* jcopy2 = NULL;
    if (dogPtr)
        jcopy2 = new Dog(*dogPtr); // 使用 Dog 的拷贝构造函数创建新对象
    
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the meowing sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    wcat->makeSound(); //will output the WrongCat sound!
    wa->makeSound();

    std::cout << std::endl;
    std::cout << "jcopy1: " << jcopy1->getType() << " " << std::endl;
    jcopy2->makeSound(); // will output the barking sound
    
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wa;
    delete wcat;

    std::cout << std::endl;
    delete jcopy2; // 必须释放新分配的对象
    */
    
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:27:28 by linyao            #+#    #+#             */
/*   Updated: 2024/11/16 12:32:11 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"
#include "Wrong.hpp"

int main()
{
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
    
    return 0;
}

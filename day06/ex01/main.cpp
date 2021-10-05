/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:55:54 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/05 20:12:22 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp" 

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int     main()
{
    Data        *data = new Data();

    uintptr_t   data_serialized;
    Data        *data_deserialized; 
    
    data->_data = 1337;
    std::cout << "Data address : " << data << std::endl;
    
    data_serialized = serialize(data);
    std::cout << "Data serialized uintptr_t : " << data_serialized << std::endl;
    data_deserialized = deserialize(data_serialized);
    std::cout << "Data deserialized address : " << data_deserialized << " = " << data << std::endl;
    delete data;
    return 0;
}
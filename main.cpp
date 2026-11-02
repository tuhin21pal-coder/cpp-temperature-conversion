#include<iostream>
int main(){
    double temp;
    char convert_unit;
    char input_unit;
    double converted_temp;
    std::cout<<"C = Celsius\n";
    std::cout<<"F = Fahrenheit\n";
    std::cout<<"K = Kelvin\n";
    std::cout<<"In which unit would you like to convert : ";
    std::cin>>convert_unit;
    if(convert_unit != 'C' && convert_unit != 'c' && convert_unit != 'F' && convert_unit != 'f' && convert_unit != 'K' && convert_unit != 'k'){
        std::cout<<"Invalid target unit.\n";
        return 0;
    }

    if(convert_unit == 'C' || convert_unit == 'c'){
        std::cout<<"From which unit would you like to convert? F or K : ";
        std::cin>>input_unit;
        if(input_unit != 'F' && input_unit != 'f' && input_unit != 'K' && input_unit != 'k'){
            std::cout<<"Invalid source unit.\n";
            return 0;
        }
        std::cout<<"Enter the temperature : ";
        if(!(std::cin >> temp)){
            std::cout << "Invalid temperature input.\n";
            return 0;
        }
        if(input_unit == 'F' || input_unit == 'f'){
            if(temp < -459.67){
                std::cout<<"Temperature cannot go below absolute temperature or -459.67 F\n";
            }
            else{
                converted_temp = (temp-32)*5/9;
                std::cout<<temp<<" F = "<<converted_temp<<" C\n";
            }
        }
        else if(input_unit == 'K' || input_unit == 'k'){
            if(temp<0){
                std::cout<<"Temperature cannot go below absolute temperature or 0 K\n";
            }
            else{
                converted_temp = temp - 273.15;
                std::cout<<temp<<" K = "<<converted_temp<<" C\n";
            }
        }
    }
    else if(convert_unit == 'F' || convert_unit == 'f'){
        std::cout<<"From which unit would you like to convert? C or K : ";
        std::cin>>input_unit;
        if(input_unit != 'C' && input_unit != 'c' && input_unit != 'K' && input_unit != 'k'){
            std::cout<<"Invalid source unit.\n";
            return 0;
        }
        std::cout<<"Enter the temperature : ";
        if(!(std::cin >> temp)){
            std::cout << "Invalid temperature input.\n";
            return 0;
        }
        if(input_unit == 'C' || input_unit == 'c'){
            if(temp < -273.15){
                std::cout<<"Temperature cannot go below absolute temperature or -273.15 C\n";
            }
            else{
                converted_temp = (temp*9/5) + 32;
                std::cout<<temp<<" C = "<<converted_temp<<" F\n";
            }
        }
        else if(input_unit == 'K' || input_unit == 'k'){
            if(temp<0){
                std::cout<<"Temperature cannot go below absolute temperature or 0 K\n";
            }
            else{
                converted_temp = temp*9/5 - 459.67;
                std::cout<<temp<<" K = "<<converted_temp<<" F\n";
            }
        }
    }
    else if(convert_unit == 'K' || convert_unit == 'k'){
        std::cout<<"From which unit would you like to convert? F or C : ";
        std::cin>>input_unit;
        if(input_unit != 'F' && input_unit != 'f' && input_unit != 'C' && input_unit != 'c'){
            std::cout<<"Invalid source unit.\n";
            return 0;
        }
        std::cout<<"Enter the temperature : ";
        if(!(std::cin >> temp)){
            std::cout << "Invalid temperature input.\n";
            return 0;
        }
        if(input_unit == 'F' || input_unit == 'f'){
            if(temp < -459.67){
                std::cout<<"Temperature cannot go below absolute temperature or -459.67 F\n";
            }
            else{
                converted_temp = (temp - 32)*5/9 + 273.15;
                std::cout<<temp<<" F = "<<converted_temp<<" K\n";
            }
        }
        else if(input_unit == 'C' || input_unit == 'c'){
            if(temp<-273.15){
                std::cout<<"Temperature cannot go below absolute temperature or -273.15 C\n";
            }
            else{
                converted_temp = temp + 273.15;
                std::cout<<temp<<" C = "<<converted_temp<<" K\n";
            }
        }
    }
    return 0;
}
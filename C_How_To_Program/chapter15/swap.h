
template <class Ty>
void swap(Ty& value_x ,Ty& value_y){
    Ty temp;
    temp = value_x;
    value_x = value_y;
    value_y = temp;
    std::cout<<"Value1 :"<<value_x<<"\nvalue2 :"<<value_y<<std::endl;
    
}
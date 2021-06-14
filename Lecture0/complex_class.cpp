#include<iostream>
using namespace std;

class custom_complex{
    int rl,img;
    
    public:
    
    custom_complex(int rl,int img){
        this->rl=rl;
        this->img=img;
    }
    
    int get_rl(){
        return this->rl;
    }
    
    int get_img(){
        return this->img;
    }
    custom_complex add(custom_complex obj);
    custom_complex subtract(custom_complex obj);
    custom_complex multiply(custom_complex obj);
    custom_complex divide(custom_complex obj);
    
    void __print(){
        cout<<rl;
        
        if(img>=0)
            cout<<"+"<<img<<"i"<<endl;
        else
           cout<<"-"<<abs(img)<<"i"<<endl; 
    }
    
};


custom_complex custom_complex::add(custom_complex obj){
    int rl,img;
    
    rl=this->rl+obj.get_rl();
    img=this->img+obj.get_img();
    
    custom_complex new_obj(rl,img);
    
    return new_obj;
    
    
}

custom_complex custom_complex::subtract(custom_complex obj){
    int rl,img;
    
    rl=this->rl-obj.get_rl();
    img=this->img-obj.get_img();
    
    custom_complex new_obj(rl,img);
    
    return new_obj;
    
    
}

custom_complex custom_complex::multiply(custom_complex obj){
    int rl,img;
    
    rl=this->rl*obj.get_rl()-this->img*obj.get_img();
    img=this->rl*obj.get_img()+this->img*obj.get_rl();
    
    custom_complex new_obj(rl,img);
    
    return new_obj;
    
    
}

int main(){
    custom_complex obj1(1,-5),obj2(8,4);
    
    custom_complex obj_sum=obj1.add(obj2);
    custom_complex obj_diff=obj1.subtract(obj2);
    custom_complex obj_prod=obj1.multiply(obj2);
    
    obj_sum.__print();
    obj_diff.__print();
    obj_prod.__print();
    
    return 0;
}

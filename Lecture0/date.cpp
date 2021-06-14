#include<bits/stdc++.h>
using namespace std;


//assuming year is a valid number

class date{
    int day,month,year;
    
    bool is_leap(){
        if(year%400==0)
            return true;
        
        if(year%4==0){
            if(year%100!=0)
                return true;
        }
        
        return false;
    }
    
    bool is_valid();
    
    public:
    
    date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    
    
    
    void print_date();   
    
    
};

bool date::is_valid(){
    
        if(month<1 || month>12)
            return false;
        
        switch(month){
            
            case 1:
            if (day<1 || day>31)
                return false;
            
            else
                return true;
            break;
            
            case 2:
            if (day<1 || day>29)
                return false;
                
            if(day==29 && is_leap())
                return true;
            else if(day==29 && !is_leap())
                return false;
            
            return true;
            
            break;
            
            case 3:
            if(day<1 || day>31)
                return false;
            
            else
                return true;
            break;
            
            case 4:
            if(day<1 || day>30)
                return false;
            
            else
                return true;
            break;
            
            case 5:
            if(day<1 || day>31)
                return false;
            
            else
                return true;
            break;
            
            case 6:
            if(day<1 || day>30)
                return false;
            
            else
                return true;
            break;
            
            case 7:
            if(day<1 || day>31)
                return false;
            
            else
                return true;
            break;
            
            case 8:
            if(day<1 || day>31)
                return false;
            
            else
                return true;
            break;
            
            case 9:
            if(day<1 || day>30)
                return false;
            
            else
                return true;
            break;
            
            case 10:
            if(day<1 || day>31)
                return false;
            
            else
                return true;
            break;
            
            case 11:
            if(day<1 || day>30)
                return false;
            
            else
                return true;
            break;
            
            case 12:
            if(day<1 || day>31)
                return false;
            
            else
                return true;
            break;
        }
    
}

void date::print_date(){
    string s="";
    
    if(!is_valid())
        cout<<"Invalid data"<<endl;
        
    else{
        if(day<10)
            s+="0"+to_string(day);
        else
            s+=to_string(day);
            
        s+="-";
            
        if(month<10)
            s+="0"+to_string(month);
        else
            s+=to_string(month);
            
        s+="-";
            
        s+=to_string(year);
        
        cout<<s<<" is a valid date"<<endl;
    }
}

int main(){
    date obj1(23,5,2001);
    date obj2(29,2,1900);
    
    obj1.print_date();
    obj2.print_date();
    
    return 0;
}

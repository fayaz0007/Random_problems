#include <bits\stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    char option0[] {"hey"};
    char option1[] {"whats app"};
    char option2[] {"what are you doing"};
    char option3[] {"what is going go"};
    char option4[] {"is all good"};
    char option5[] {"just testing"};
    char option6[] {"i am fucking bored"};
    char option7[] {"i want to start my project as soon as possible "};
    char option8[] {"just sharping my skills firest"};
    char option9[] {"lets start first"};
    
    bool end{false};

    int max_leanth{15};
    char name[max_leanth]{};
    cin.getline(name,max_leanth);
     while(!end){
         size_t random_num = static_cast<size_t>((rand() % 11));
         switch (random_num)
         {
         case 0:
                cout<<option0<<endl;
            break;
         case 1:
                cout<<option1<<endl;
            break;
         case 2:
                cout<<option2<<endl;
            break;
         case 3:
                cout<<option3<<endl;
            break;
         case 4:
                cout<<option4<<endl;
            break;
         case 5:
                cout<<option5<<endl;
            break;
         case 6:
                cout<<option6<<endl;
            break;
         case 7:
                cout<<option7<<endl;
            break;
         case 8:
                cout<<option8<<endl;
            break;
         case 9:
                cout<<option9<<endl;
            break;
         default:
                cout<<"i dont see anything";
            break;
        }
        char go_on;
        cin>>go_on; 
        end=((go_on=='Y')||(go_on=='y')) ? false :true;
    }
}
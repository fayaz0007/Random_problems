#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n[50],count=0;
    while (count<100){
        cin>>n;
        if(n<0){
            break;
        }
        arr[count]=n;
        count++;
    }
    if(count>0){
        int sum = 0;
        for(int i = 0; i < count; i++){
            sum += n[i];
        }
    }
}
// #include <iostream>

// const int MAX_SIZE = 100; // Maximum number of individuals

// int main() {
//     int ages[MAX_SIZE];
//     int count = 0;

//     // Read ages until a negative age is entered or the array is full
//     while (count < MAX_SIZE) {
//         int age;
//         std::cout << "Enter an individual's age (negative age to stop): ";
//         std::cin >> age;

//         if (age < 0) {
//             break;
//         }

//         ages[count] = age;
//         count++;
//     }

//     if (count > 0) {
//         int sum_of_ages = 0;
//         for (int i = 0; i < count; i++) {
//             sum_of_ages += ages[i];
//         }

//         double average_age = static_cast<double>(sum_of_ages) / count;
//         std::cout << "Average age: " << average_age << std::endl;
//     } else {
//         std::cout << "No data entered." << std::endl;
//     }

//     return 0;
// }

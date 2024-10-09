    //STT: 18
    //Full Name: Hồ Phúc Nhân - 22520995
    //Notes or Remarks: 
    //Session 01 


// Exercise 01
#include <iostream>

using namespace std;

// struct Node {
//     int data;      
//     Node* next;   
//     
//     Node(int val) : data(val), next(nullptr) {}
// };

// class Stack {
// private:
//     Node* top; 

// public:
//    
//     Stack() : top(nullptr) {}

//     ~Stack() {
//         while (!isEmpty()) {
//             pop();
//         }
//     }
    
//     void push(int value) {
//         Node* newNode = new Node(value); 
//         newNode->next = top;              
//         top = newNode;                    
//     }
     
//     int pop() {
//         if (isEmpty()) {
//             cout << "Ngăn xếp rỗng. Không thể lấy phần tử." << endl;
//             return -1; 
//         }
//         Node* temp = top;      
//         int poppedValue = top->data; 
//         top = top->next;       
//         delete temp;          
//         return poppedValue;    
//     }
    
//     bool isEmpty() {
//         return top == nullptr; 
//     }
     
//     int peek() {
//         if (isEmpty()) {
//             cout << "Ngăn xếp rỗng. Không thể xem." << endl;
//             return -1; 
//         }
//         return top->data; 
//     }
// };

// int main() {
//     Stack stack; 
//     int choice, value;

//     do {
//         cout << "\n1. Đẩy phần tử vào ngăn xếp\n";
//         cout << "2. Lấy phần tử ra khỏi ngăn xếp\n";
//         cout << "3. Xem phần tử trên cùng\n";
//         cout << "4. Kiểm tra ngăn xếp có rỗng hay không\n";
//         cout << "0. Thoát\n";
//         cout << "Nhập lựa chọn của bạn: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Nhập giá trị để đẩy vào ngăn xếp: ";
//                 cin >> value;
//                 stack.push(value);
//                 cout << value << " đã được đẩy vào ngăn xếp." << endl;
//                 break;
//             case 2:
//                 value = stack.pop();
//                 if (value != -1) {
//                     cout << "Phần tử đã lấy ra: " << value << endl;
//                 }
//                 break;
//             case 3:
//                 value = stack.peek();
//                 if (value != -1) {
//                     cout << "Phần tử trên cùng: " << value << endl;
//                 }
//                 break;
//             case 4:
//                 cout << "Ngăn xếp " << (stack.isEmpty() ? "rỗng." : "không rỗng.") << endl;
//                 break;
//             case 0:
//                 cout << "Thoát chương trình." << endl;
//                 break;
//             default:
//                 cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << endl;
//                 break;
//         }
//     } while (choice != 0); 

//     return 0;
// }




// Exercise2
// #include <iostream>

// using namespace std;

// struct Node {
//     int data;     
//     Node* next;    

//     Node(int val) : data(val), next(nullptr) {}
// };

// class Stack {
// private:
//     Node* top; 

// public:
 
//     Stack() : top(nullptr) {}

//     void push(int value) {
//         Node* newNode = new Node(value); 
//         newNode->next = top;            
//         top = newNode;                   
//     }

//     bool isEmpty() {
//         return top == nullptr; 
//     }
// };

// int main() {
//     Stack stack; 

//     cout << (stack.isEmpty() ? "True." : "False.") << endl;

//     return 0;
// }




// Exercise3
// #include <iostream>
// #include <vector> // Thư viện để lưu trữ giá trị đã nhập

// using namespace std;

// // Cấu trúc Node để đại diện cho từng phần tử trong ngăn xếp
// struct Node {
//     int data;      // Dữ liệu lưu trữ trong nút
//     Node* next;    // Con trỏ đến nút tiếp theo

//     // Hàm khởi tạo để khởi tạo nút
//     Node(int val) : data(val), next(nullptr) {}
// };

// // Lớp Stack sử dụng danh sách liên kết với giới hạn
// class Stack {
// private:
//     Node* top; // Con trỏ đến nút trên cùng của ngăn xếp
//     int maxSize; // Kích thước tối đa của ngăn xếp
//     int currentSize; // Kích thước hiện tại của ngăn xếp

// public:
//     // Hàm khởi tạo để khởi tạo ngăn xếp với kích thước tối đa
//     Stack(int size) : top(nullptr), maxSize(size), currentSize(0) {}

//     // Hàm để thêm một phần tử mới vào ngăn xếp
//     void push(int value) {
//         if (isFull()) {
//             cout << "Ngăn xếp đã đầy. Không thể thêm phần tử." << endl;
//             return; // Không cho phép thêm khi ngăn xếp đầy
//         }
//         Node* newNode = new Node(value); // Tạo một nút mới
//         newNode->next = top;              // Liên kết nút mới với nút trên cùng trước đó
//         top = newNode;                    // Cập nhật nút trên cùng
//         currentSize++;                    // Tăng kích thước hiện tại
//     }

//     // Hàm để kiểm tra ngăn xếp có rỗng hay không
//     bool isEmpty() {
//         return top == nullptr; // Trả về true nếu top là nullptr
//     }

//     // Hàm để kiểm tra ngăn xếp có đầy hay không
//     bool isFull() {
//         return currentSize >= maxSize; // Trả về true nếu kích thước hiện tại >= kích thước tối đa
//     }

//     // Hàm để in tất cả giá trị trong ngăn xếp
//     void printStack() {
//         Node* current = top; // Bắt đầu từ nút trên cùng
//         cout << "Giá trị trong ngăn xếp: ";
//         while (current != nullptr) {
//             cout << current->data << " "; // In giá trị của từng nút
//             current = current->next;       // Di chuyển đến nút tiếp theo
//         }
//         cout << endl;
//     }
// };

// int main() {
//     int size;
//     cout << "Nhập kích thước tối đa cho ngăn xếp: ";
//     cin >> size; // Nhập kích thước tối đa cho ngăn xếp

//     Stack stack(size); // Tạo một ngăn xếp với kích thước tối đa được nhập
//     vector<int> values; // Vector để lưu trữ các giá trị đã nhập

//     // Nhập dữ liệu để thêm vào ngăn xếp
//     int value;
//     char choice;

//     do {
//         cout << "Nhập giá trị để thêm vào ngăn xếp: ";
//         cin >> value; // Nhập giá trị

//         stack.push(value); // Thêm giá trị vào ngăn xếp

//         // Kiểm tra xem ngăn xếp có đầy hay không
//         if (stack.isFull()) {
//             cout << "Ngăn xếp đã đầy." << endl; // Kết quả nếu ngăn xếp đầy
//             break; // Ngừng vòng lặp nếu ngăn xếp đầy
//         } else {
//             cout << "Ngăn xếp chưa đầy." << endl; // Kết quả nếu ngăn xếp chưa đầy
//             values.push_back(value); // Lưu trữ giá trị đã nhập vào vector
//         }

//         cout << "Bạn có muốn thêm giá trị khác không? (y/n): ";
//         cin >> choice; 
//     } while (choice == 'y' || choice == 'Y');

//     cout << "Toàn bộ giá trị đã nhập vào ngăn xếp: ";
//     for (int val : values) {
//         cout << val << " "; 
//     }
//     cout << endl;
//     return 0;
// }




// // Exercise4
// #include <iostream>
// #include <stack>
// #include <unordered_map>

// using namespace std;

// bool isValid(const string& s) {
//     stack<char> st; 
//     unordered_map<char, char> brackets = {
//         {')', '('},
//         {']', '['},
//         {'}', '{'}
//     }; 

//     for (char c : s) {
//         if (c == '(' || c == '[' || c == '{') {
//             st.push(c);
//         }
//         else if (c == ')' || c == ']' || c == '}') {
//             if (st.empty()) {
//                 return false; 
//             }
//             if (st.top() != brackets[c]) {
//                 return false; 
//             }
//             st.pop(); 
//         }
//     }
//     return st.empty(); 
// }

// int main() {
//     string s;
//     cout << "Nhập chuỗi để kiểm tra tính hợp lệ: ";
//     cin >> s; 
//     if (isValid(s)) {
//         cout << "Chuỗi hợp lệ." << endl;
//     } else {
//         cout << "Chuỗi không hợp lệ." << endl;
//     }

//     return 0;
// }




// Exercise5
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <algorithm> 

// using namespace std;

// string reverseWords(const string& str) {
//     stringstream ss(str); 
//     string word;
//     vector<string> words;

//     while (ss >> word) {
//         reverse(word.begin(), word.end()); 
//         words.push_back(word);
//     }

//     string result;
//     for (const string& w : words) {
//         result += w + " ";
//     }

//     if (!result.empty()) {
//         result.pop_back();
//     }

//     return result;
// }

// void displayMenu() {
//     cout << "----- Menu -----" << endl;
//     cout << "1. Đảo ngược từng từ trong chuỗi" << endl;
//     cout << "2. Thoát" << endl;
// }

// int main() {
//     int choice;
//     string str;

//     do {
//         displayMenu();
//         cout << "Nhập lựa chọn của bạn: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: 
//                 cin.ignore(); 
//                 cout << "Nhập chuỗi: ";
//                 getline(cin, str); 
//                 cout << "Chuỗi sau khi đảo ngược từng từ: " << reverseWords(str) << endl;
//                 break;
//             case 2: // Thoát
//                 cout << "Thoát chương trình." << endl;
//                 break;
//             default:
//                 cout << "Lựa chọn không hợp lệ. Vui lòng thử lại." << endl;
//         }
//     } while (choice != 2); 
//     return 0;
// }



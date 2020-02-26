# Effective C++ #

### 1. Prefer const, enums, and inlines to #define ###
1. const pointer to string type
```C++
const char* myNamePtr = "Shrikant Badiger";
```
2. Class Specific constant
```cpp
class UserLogin {
  private:
    static const int s_NumberOfValidUsers;
    std::string m_UsersList[s_NumberOfValidUsers];
 }
static const int UserLogin::s_NumberOfValidUsers=5;
 ```
 #### Note: #### 
 *  _Class Specific const we can not be created, because ```#define ``` not respects the scope._
 *  _For ```#define``` is overrule the encapsulation, we can not create ```private``` by using this method._
       

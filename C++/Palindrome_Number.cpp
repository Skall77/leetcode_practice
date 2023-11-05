class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int x_size = 0;
        int copy = x;
        while (copy != 0)
        {
            copy /= 10;
            x_size++;
        }
        while (x != 0) {
            int first = x / std::pow(10, x_size - 1);
            int second = x % 10;
            std::cout << first << " " << second << std::endl;
            if (first != second)
                return false;
            x = x % int(std::pow(10, x_size - 1));
            std::cout << "x after removing first number is : " << x  << std::endl;
            x = x / 10;
            std::cout << "x after removing last number is : " << x  << std::endl;
            x_size -= 2;
        }
        return true;
    }
};
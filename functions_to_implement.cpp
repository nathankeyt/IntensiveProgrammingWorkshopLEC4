#include <iostream>
#include <vector>
#include <string>
/* String functions section */
// takes two strings and returns a new string that is the result of removing all occurrences of s2 from s1.
std::string RemoveAllSubstrings(std::string s1, std::string s2) {
	for (int i = 0; i < s1.length() - s2.length(); i++) {
		if (s1.substr(i, i + s2.length()).compare(s2)) {
			s1 = s1.substr(0, i + 1) + s1.substr(i + s2.length() + 1, s1.length());
			i = 0;
		}
	}
	return s1;
};

// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2) {
	for(int i = 0; i < s1.length(); i++) {
		if (s1.substr(i, i + s2.length()).compare(s2)) {
			return s1.substr(0, i + 1) + s1.substr(i + s2.length() + 1, s1.length());
		}
	}
	return "";
};
// Sums all numbers in a vector and returns the resulting value
int Sum(std::vector<int> nums) {
	int output = 0;
	for (int i = 0; i < nums.size(); i++) {
		output += nums[i];
	}
	return output;
};



// int main(){
// 	std::cout << Factorial (5) <<std::endl;
// 	std::vector<int> v{1,2,3};
// 	std::vector<int> res = AddN(v, 5);
// 	for(int i=0;i<res.size();i++){
// 		std::cout<<res[i]<<" ";
// 	}
// }

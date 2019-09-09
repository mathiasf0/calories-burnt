#include <iostream>
using namespace std;

int main()
{
	double PerWeight;
	double PerHeight;
	int PerAge;
	double activFactor;
	double BMR;
	cout << "Hi! Today we will calculate how many calories you burned today. To proceed, we will need information on your weight, height, age, and daily activity! All your information is private, and solely used for calculation purposes. " << '\n';
	cout << "Please enter your weight in pounds and then press enter key: ";
	cin >> PerWeight;
	cout << "Please enter your height in feet and then press enter key: ";
	cin >> PerHeight;
	cout << "Please enter your age in years and press enter key: ";
	cin >> PerAge;
	cout << "These are the activity numbers for the most common lifestyles. Please read each one carefully and choose only one." << '\n'
		<< "If you spend most of your day at your desk job and do not exercise, enter 1.2. " << '\n'
		<< "If you do some exercise 1 to 3 days per week, then enter 1.375. " << '\n'
		<< "If you do moderate exercises 3 to 5 times a week then enter 1.55. " << '\n'
		<< "If you do high - intensity exercises 6 to 7 times a week, enter 1.725. " << '\n'
		<< "If you train and play sports at least twice a day enter 1.9. " << '\n' ;
	cin >> activFactor;
	BMR = 66 + (6.2 * PerWeight) + (152.4 * PerHeight) - (6.8 * PerAge); //BMR Formula
	cout << "You burn about " << BMR << " calories each day! If you eat more calories than that per day, then you could definitely do more exercises if you wish to!" << '\n'
		<< "On the other hand, you may wish to cut down on certain foods to lower your caloric intake. " 
		<< "Here are some of the most popular high-calorie foods : " << '\n'
		<< "One Avocado has about 322 calories!" << '\n'
		<< "Four Tablespoons of Peanut Butter has 400 calories!" << '\n'
		<< "One Cup of Nuts has 400 calories!" << '\n'
		<< "One Small Box of Raisins has 200 calories!" << '\n';

	system("pause");
}

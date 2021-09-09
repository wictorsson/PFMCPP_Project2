#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
int
float
bool
char
double
unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int samples = 44100;
    int bitrate = 8;
    int volume = 11;
    float temperature = 29.5f;
    float pressure = 56.9f;
    float percent = 12.56f;
    bool playing = true;
    bool stopped = false;
    bool green = true;
    char gate = 'c';
    char intvalue = 100;
    char grade = 'a';
    double pi = 3.14159265359;
    double knobValue = 0.99999999;
    double product = 0.987*0.123456;
    unsigned int dayOfMonth = 8;
    unsigned int page = 12;
    unsigned int counter = 100;

    
    ignoreUnused(number, samples, bitrate, volume, temperature, pressure,percent, playing, stopped, green, gate, intvalue, grade, pi, knobValue, product, dayOfMonth, page, counter); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int bitCrush(int resolution = 24, int downsampling=1)
{    
    ignoreUnused(resolution, downsampling);

    return{};
}
/*
 2)
 */
bool gate(int threshold=0)
{    
    ignoreUnused(threshold);

    return{};   
}
/*
 3)
 */
double calculate(int x, int y)
{    
    ignoreUnused(x,y);

    return{};
}
/*
 4)
 */
 void startPlaylist(int songNumber=1, int volume=10)
 {   
    ignoreUnused(songNumber,volume);
 } 
/*
 5)
 */
void addSong(char song, char artist, char label, char genre)
{    
    ignoreUnused(song, artist, label, genre );
 } 
/*
 6)
 */
int turnKnob(int value)
{
    ignoreUnused(value);

    return{};
}
/*
 7)
 */
void playNote(int pitch, int duration, int velocity = 90)
{
    ignoreUnused(pitch, duration, velocity);
}
/*
 8)
 */
int startCounter(int startTime = 10, int endTime =0)
{
    ignoreUnused(startTime,endTime);

    return{};
}
/*
 9)
 */
int random(int highLimit, int lowLimit)
{
    ignoreUnused(highLimit,lowLimit);

    return{};
}
/*
 10)
 */
void delay(float time, int feedback)
{
    ignoreUnused(time,feedback);

}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto bitCrushed = bitCrush(8, 2);
    //2)
    auto gateState = gate(-10);
    //3)
    auto sum = calculate(5,5); 
    //4)
    startPlaylist(1,1);
    //5)
    addSong(1,1,1,1);
    //6)
    auto knobValue = turnKnob(5);
    //7)
    playNote(50,50,50);
    //8)
    auto countDown = startCounter(10,0);
    //9)
    auto number = random(100,0);
    //10)
    delay(10.5,100);  
    
    ignoreUnused(carRented, bitCrushed, gateState, sum, knobValue, countDown,  number);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

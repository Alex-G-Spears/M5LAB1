#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Alexander Spears
11/6/2026

This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/


// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();

void choice_main_road();
void choice_lake();
void choice_shelter();
void choice_shelter2();

void choice_forrest();
void choice_friend();
void choice_foe();

void choice_wait1();
void choice_wait2();

// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "I \t H O P E   Y O U \t E N J O Y E D" << endl;
    cout <<"\t\t M Y \t   G A M E" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << endl;
  cout << "\t\t Main Menu" << endl;
  cout << endl;
  cout << "You are at the enterence of a small town, surrounded by an orange forrest." << endl;
  cout << "Do you:" << endl;
  cout << "1 : Walk down the main road" << endl;
  cout << "2 : Turn around and walk into the endless orange forrest" << endl;
  cout << "3 : Wait for someone to show up" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Enter just the number of your choice : ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_main_road();
  } else if (2 == choice) {
    choice_forrest();
  } else if (3 == choice) {
    choice_wait1();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_main_road() {
  cout << "You walk down the road." << endl;
  cout << "The town is quaint and well decorated." << endl;
    cout << "You hit a split in the path." << endl;
  cout << "Do you:" << endl;
  cout << "1 : Go east." << endl;
  cout << "2 : Go south." << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {   
    choice_lake();
  } else if (2 == choice) {
    choice_shelter();
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_main_road();  // try again
  }
}

void choice_lake() {
    cout << "The road ends at a small lake." << endl;
    cout << "You swear you can see something at the other end." << endl;
    cout << "Do you :" << endl;
    cout << "1 : Attempt to cross the lake" << endl;
    cout << "2 : Go Back" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {   
        cout << "You attempt to cross the lake." << endl;
        cout << "As you start to sink into the water," << endl;
        cout << "The waves threatening to drown you," << endl;
        cout << "You thought you saw two people on the other side." << endl;
        cout << "Standing atop" << endl;
        cout << endl;
        cout << "AN ENDLESS WHITE ABYSS" << endl;
        cout << endl;
    } else if (2 == choice) {
        choice_main_road();
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_lake();  // try again
    }
}

void choice_shelter() {
    cout << "The road ends at a small steep hill" << endl;
    cout << "Looking at the front, it is actualy a bomb shelter" << endl;
    cout << "Do you :" << endl;
    cout << "1 : Attempt to enter the shelter" << endl;
    cout << "2 : Go Back" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {   
        choice_shelter2();
    } else if (2 == choice) {
        choice_main_road();
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_shelter();  // try again
    }
}

void choice_shelter2(){
    cout << "You attempt to open the doors." << endl;
    cout << "They are locked." << endl;
    cout << "You notice a keypad to the right of the shelter doors." << endl;
    cout << "You do not know the code." << endl;
    cout << "Do you: " << endl;
    cout << "1 : Wait" << endl;
    cout << "2 : Go Back" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {   
        choice_wait1();
    } else if (2 == choice) {
        choice_main_road();
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_shelter2();  // try again
    }
}

void choice_forrest() {
    cout << "You walk back into the forrest." << endl;
    cout << "You keep walking." << endl;
    cout << "And walking." << endl;
    cout << "You are lost" << endl;
    cout << "Do you: " << endl;
    cout << "1 : Wait" << endl;
    cout << "2 : Keep walking" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {   
        choice_friend();
    } else if (2 == choice) {
        choice_foe();
    }
    else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_forrest();  // try again
    }
}
void choice_friend() { TODO
    cout << "You attempt to open the doors." << endl;
    cout << "They are locked." << endl;
    cout << "You notice a keypad to the right of the shelter doors." << endl;
    cout << "You do not know the code." << endl;
    cout << "Do you: " << endl;
    cout << "1 : Wait" << endl;
    cout << "2 : Go Back" << endl;
}

void choice_foe() { cout << "TODO: Write something here" << endl; }

void choice_wait1() { cout << "TODO: Write something here" << endl; }

void choice_wait2() { cout << "TODO: Write something here" << endl; }


// any new choices go here
//********************************************************************
// Names: Savannah Stephenson, 
// 		  Janavi Bhalal,
//  	  Alicia Mares,
// 		  Emmali Padron,
// 		  Abrielle Jackson
// Class: UNIV 1101 First Year Seminar
// Instructor: Rita Sperry
// Assignment: First Year Symposium Project
// Program description: This program runs Escape Or Be Eaten
//*********************************************************************

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Listing function prototypes
int inputValidation (int choice, int range1, int range2); 
void congratulations ();
void titleScreen ();
int waitStory ();
void miniGame ();


	
int main ()
{
	//creating an outputfile string object
	ofstream outFile;
	//opening the file called results
	outFile.open("results.txt");
	
	//Defining variables to be used throughout game 
	char play;
	string playerName;
	int choice, time = 0, choice2, choice3, binderChoice, shoeChoice, shoes = 0, choice4, choice5, knifeChoice, stabs, choice6, dieOrNah = 0, choice7;
	
	//Defining an array and array size for weapons
	const int SIZE = 2;
	int weapon[SIZE] = {0, 0};
	
	//Calling the function tittle screen to display the splashscreen
	titleScreen();
	
	//Do-While loop that displays the menu asking the user if they would like to play
	do
	{
		//Asking the user to play or quit
		cout << "Would you like to play?" << endl;
		cout << "Enter P to play or Q to quit." << endl;
		cin >> play;
		
		//Validting user input
		while ((play < 'P' || play > 'Q') && (play < 'p' || play > 'q'))
		{
			cout << "Your indecision is not appreciated, please enter P to play or Q to quit." << endl;
			cin >> play;
		}
		
		//Clearing the screen for the story to begin
		cout << "\033[2J";
		
		//Start of the game!
		if ( play == 'p' || play == 'P' )
		{
			//Printing the opening paragraph of the story to the screen
			cout << "You wake up slowly. You are only aware of a select few things as you reaquaint" << endl;
			cout << "yourself with existance. It is cold, the ground is hard, and something is very" << endl;
			cout << "very wrong." << endl << endl;
				 
			cout << "The room you are in is sparse, the walls bare and painted with peeling white paint" << endl;
			cout << "that might once have been called eggshell. You have a headache and getting up from" << endl;
			cout << "the ground feels like a great undertaking. The hardwood is sticky and, you feel the" << endl;
			cout << "need to reiterate, cold, under your bare feet. There is a small desk fit underneath" << endl;
			cout << "the window with a few drawers buit in and a swivel chair with one of the wheels broken" << endl;
			cout << "off. You can't remember where you were before this but you know that you did not come" << endl;
			cout << "to this place of your own free will. Your head pounds." << endl << endl;
				 
			//Prompting the user to make a choice based on the information given
			cout << "What do you do?" << endl;
			cout << "1. Wait" << endl;
			cout << "2. Search The Room" << endl;
			
			//Receiving the user's choice
			cin >> choice;
			
			cout << endl;
			
			//Validating user input using a function
			choice = inputValidation (choice, 1, 2);
			
			//Clearing the screen
			cout << "\033[2J";
			
			//Switch statement that displays the story for each option
			switch (choice)
			{
				//The story for if the user decides to wait in the room. 
				case 1: 
					    //calling function with story
						dieOrNah = waitStory ();
						
						if (dieOrNah == 1)
						{
							break;
						}
						
						//If the user does not wait for too long they are given the option to search the room.
				
				//Story for if they decide to search the room
				case 2: 
				
						//Using a do while loop here so that the user can search everything in the room!
						do
						{
							//Printing the options for the user to interact with in the room
							cout << "There are a few things in the room that you can investigate." << endl; 
							cout << "1. Look at the desk" << endl;
							cout << "2. Look at the swivel chair" << endl;
							cout << "3. Look at the window" << endl;
							cout << "4. Look at the door" << endl;
							cout << "5. You are done searching" << endl << endl;
												
							//Geting the user's choice
							cin >> choice3;
												
							cout << endl << endl;
												
							//Validating user's input with a function
							choice3 = inputValidation (choice3, 1, 5);
							
							cout << "\033[2J";
												
							switch (choice3)
							{
								//Story for if they decide to look at the desk
								case 1 : cout << "The desk is an old creature.  When you pull out the first of the two drawers" << endl;
										 cout << "it squeaks horribly and the sound of it echoing in the nearly empty room" << endl;
										 cout << "makes you flinch. Inside of the first drawer there is a stack of loose paper" << endl;
										 cout << "and a small binder labled 'Recipes'. You pick it up." << endl << endl; 
														 
										//Prompting the user to make a choice about opening the binder
										cout << "Do you want to open the binder?" << endl;
										cout << "Enter 1 for yes or 2 for no." << endl;
														 
										//geting user's chice
										cin >> binderChoice;
														 
										//validating user's input with a function
										binderChoice = inputValidation (binderChoice, 1, 2);
										
										cout << endl << endl;
														 
										//if loop based on user's decision
										if (binderChoice == 1) 
										{
															 //Printing story for if they decide to look in the binder
															 cout << "The first page has the layout of a typical recipe card, this recipe serves one," << endl;
															 cout << "takes an hour to prep and an hour and a half to cook, and is named smoked ribs." << endl; 
															 cout << "The one disconcerting thing is that in the blank that traditionally says 'from" << endl;
															 cout << "the kitchen of' all but the word from has been crossed out using a thick marker." << endl;
															 cout << "Turning the page you see that this trend has been repeated for each page in the" << endl;
															 cout << "book." << endl << endl; 
															 
															 cout << "from Lindsey Hargrove" << endl;
															 cout << "from Michale Garcia" << endl; 
															 cout << "from Janelle House" << endl;
															 cout << "from Agnes York" << endl;
															 cout << "from Janice Brown" << endl;
															 cout << "from Marsha Barrera" << endl;
															 cout << "from Laurence Marquez" << endl;
															 cout << "from......................................................." << endl << endl << endl;
															 
															 cout << "You close the cook book with shaking hands and put it back in the drawer." << endl; 
															 cout << "You cannot help but notice that every single recipe included meat." << endl;
														 }
														 else
														 {
															 //Printing story for if they decide not to look in the binder
															 cout << "You put the binder back in the drawer and look at the loose papers, it seems to be" << endl; 
															 cout << "a collection of old flight tickets, each with different names but all leaving the same" << endl; 
															 cout << "island resort that you vaguely remember enjoying before you ended up where you are" << endl; 
															 cout << "now. Your head hurts. You think for a second you see your name amidst the tickets," << endl;
															 cout << "but when you shuffle through them to find it again you aren't able to." << endl;
														 }
														 
														 //Printing the second part of searching the desk
														 cout << "You close the first drawer and open the second one. Inside your shoes sit innocently like" << endl;
														 cout << "they belong inside of a strange desk drawer." << endl; 
														 
														 //Prompting the user to make a decision
														 cout << "Do you take them?" << endl;
														 cout << "Enter 1 for yes or 2 for no." << endl;
														 
														 //getting the user's decision 
														 cin >> shoeChoice;
														 
														 //validating user input using a function
														 shoeChoice = inputValidation (shoeChoice, 1, 2);
														 
														 cout << endl << endl;
														 
														 //if else staetment for if they decide to take the shoes
														 if (shoeChoice == 1) 
														 {
															 cout << "You take your shoes out of the drawer and shove them onto your feet." << endl; 
															 cout << "You feel slightly better." << endl;
															 
															 //the decided to take the shoes so the shoe counter in increased to one
															 shoes = 1; 
														 }
														 else
														 {
															 cout << "You feel like your shoes have betrayed you by be being inside of an unfamiliar drawer" << endl;
															 cout << "and decide to leave them where they are." << endl;
															 
															 //they decided not to take the shoes so the shoe counter remains at zero 
															 shoes = 0;
														 }
														 
														 cout << "You close the second drawer and turn back to the room." << endl << endl;
														 
														 
														 
														 break;
												
												//Story for if they decide to look at the swivel chair
												case 2 : cout << "The swivel chair has one of it's wheels missing, there are some scratches in the ground" << endl;
														 cout << "from where the leg without a wheel has been dragged across the hardwood. You notice that"<< endl;
														 cout << "one of the remaining weels seems to be on it's last legs." << endl << endl;
														 
														 //Prompting user to make choice
														 cout << "Would you like to snap it off?" << endl;
														 cout << "1. Yes" << endl;
														 cout << "2. No" << endl;
														 
														 //Getting choice from user
														 cin >> choice6;
														 
														 //Validating input
														 choice6 = inputValidation (choice6, 1, 2);
														 
														 cout << endl << endl;
														 
														 if (choice6 == 1)
														 {
															 cout << "The sound of the wheel snapping off of the chair is oddly satisfying. The jagged edge where" << endl;
															 cout << "it was once attached to the leg of the swivel chair is a comfort and the wheel itself fits" << endl;
															 cout << "nicely into your palm." << endl << endl;
															 
															 weapon[0] = 1;
														 }
														 else 
														 {
															 weapon[0] = 0;
														 }
														 
														 cout << "You turn back to the room." << endl << endl; 
														 
														 break;
														 
												//Story for if they look out the window
												case 3 : cout << "Outside the window all you can see is green. Unfamiliar plants seem to crowd the rectangular opening," << endl; 
														 cout << "begging for your attention with their waxy leaves and sharp points. When you try to open the window it stays" << endl;
														 cout << "resolutely shut. You squint at the lock and scoff at your silliness as you untwist the latch. You put all of" << endl;
														 cout << "your force behind your next attempt but the window still will not open. Dread begins to pool in your stomach." << endl; 
														 cout << "There are lines scratched into the windowsill. Tracing them with your fingers makes you think of someone clawing" << endl; 
														 cout << "desperately at the unopenable window." << endl;
														 
														 cout << "You turn back to the room." << endl << endl;
														 
														 
														 break;
												
												//story for if they look at the door
												case 4 : cout << "The door is painted a slightly lighter shade of white when compared to the walls and this does nothing to hide the" << endl;
														 cout << "red smudge that makes itself at home in the lower right hand corner of the door. When you grasp the door knob it" << endl; 
														 cout << "turns easily, at least you are not completely trapped." << endl;
														 
														 cout << "You turn back to the room." << endl << endl;
														 
														 break;
												
												//Parting menu statment
												case 5 : cout << "You start to feel anxious, and decide that you are done looking around. The only option left now is action." << endl << endl;
														 break;
														 
							}
												
							//condition for do-while loop that makes sure the user exits the search the room menu when they enter 5
						}while (choice3 != 5);
						break;
			}

		//Printing story
		cout << "Upon exiting the room you find yourself in a narrow hallway. There are two doors that you can see," << endl;
		cout << "one is at the end of the hallway and feels distinctly like an exit, the other is only slightly down" << endl;
		cout << "the hallway and is cracked open just enough that you can see the moving colors of a television." << endl << endl;
						
		//Promping user to make decision
		cout << "What direction do you go?" << endl;
		cout << "1. Toward the ajar door" << endl;
		cout << "2. Toward the far door" << endl;
						
		//receiving user's decision
		cin >> choice4;
						
		//validating input using a function
		choice4 = inputValidation (choice4, 1, 2);
		
		cout << endl << endl;
						
		//switch statement based on user's choice
		switch (choice4)
		{
			//If they choose case one they just get a little more flavor text! there is no break statement in case one
			//so that the user will get the description for both options.
			case 1 : cout << "As you approach you can see more of the room through the crack of the door." << endl;
					 cout << "The television is playing Jeapardy and just as you reach the door, hand reaching" << endl;
					 cout << "out to touch the handle, you hear a voice chime in with the answer to one of" << endl;
					 cout << "the questions. You decide against investigating the room." << endl;
			case 2 : cout << "You keep your steps light as you head toward the far door. Each time your foot" << endl;
					 cout << "meets the ground you have a brief moment of panic, worried about squeeky floor" << endl;
					 cout << "boards. When you finally get the the front door you are so releived that you" << endl;
					 cout << "take a moment to look around. The hallway opens up into an entryway that gives" << endl;
					 cout << "access to a kitchen and a dining room." << endl << endl;
					 break;
		}
						
		//Prompting user to make a choice
		cout << "What do you do?" << endl;
		cout << "1. Leave" << endl;
		cout << "2. Investigate the kitchen" << endl;
		cout << "3. Investigate the dining room" << endl;
						
		//receiving choice from user
		cin >> choice5;
						
		//validating user input
		choice5 = inputValidation (choice5, 1, 3);
						
		cout << endl << endl;
						
		//switch statement for each choice
		switch (choice5)
		{
			//Case one brings them to the end of the switch statement to the story after the optional rooms to look in
			case 1: cout << "\033[2J";

					break;
							
			//story for looking in the kitchen
			case 2: cout << "\033[2J";
					
					cout << "Entering the kitchen feels dangerous. The stainless steel appliances are too" << endl;
					cout << "clean and the collection of knives is much, much too large." << endl << endl;
									
					//prompting the user to make a chocie
					cout << "Do you take one of the knives?" << endl;
					cout << "Enter 1 for yes and 2 for no." << endl;
									
					//getting choice from user
					cin >> knifeChoice;
									
					//validating user input
					knifeChoice = inputValidation(knifeChoice, 1, 2);
									
					cout << endl << endl;
									
					//if the user decided to take a knife the knife count goes up by one, otherwise it stays at 0
					if (knifeChoice == 1)
					{
						cout << "You feel a little bit better having a weapon in your hand." << endl << endl;
						weapon[1] = 1;
					}
					else
					{
						cout << "You want to throw up just thinking about holding one of these knives." << endl << endl;
						weapon[1] = 0;
					}
					
					cout << "\033[2J";
					
					break;
							
					//story for looking at diing room
					case 3: cout << "\033[2J";
					
							cout << "The dining room has only one place setting. There is a recipe card on the table." << endl << endl;
									
							//prompting the user to type in their name
							cout << "Please type in your full name." << endl;
											
							//telling the complier to ignore anything that might already be in the keyboard buffer
							cin.ignore();
											
							//getting user's name
							getline (cin, playerName);
											
							cout << endl << endl;
											
							//printing creepy recipe with user's name inplying that they are the pulled meat inside of the sandwitches ha ha
							cout << "It reads: Pulled Meat Sandwitches, from " << playerName << endl;
											
							cout << "You have never made pulled meat sandwitches in your life." << endl << endl;
							
											
							break;
		}
						
		//story for leaving the house
		cout << "Walking out of the door seems almost too easy." << endl << endl;
						
		cout << "That would be an accurate feeling, as the moment you step foot over the threshhold you feel the" << endl;
		cout << "faintest pull of fishing wire against your shin as a trip wire goes off. A windchime jingles at" << endl;
		cout << "you threateningly and you break out into a run at the same time you hear a door make inpact with" << endl;
		cout << "a wall from behind you." << endl;
						
		//If the user decided to grab their shoes then they manage to outpace their attacker
		if (shoes == 1)
		{
			cout << "Twigs cruch under your steps as you sprint through the vegetation. You praise your own decision" << endl;
			cout << "to grab your shoes each time your foot makes inpact with the unforgiving ground. Someone is hot" << endl;
			cout << "on your heels but you manage to outpace them while ducking through the trees. You have never been" << endl;
			cout << "so releived to see a freeway." << endl << endl;
							
			//calling functin to print congratulations message
			congratulations();
							
			//writing results of this playthorugh to the file
			outFile << "The player escaped!" << endl;
		}
						
		//if the user did not grab their shoes then they are caught be their attacker
		else
		{
			cout << "The moment you delve into the forest you start to curse your lack of shoes. Twigs snap under your" << endl;
			cout << "rapidly moving feet and one especially motivated branch has punctured the bottom of your foot. The" << endl;
			cout << "pain is nealry unbearable but you force yourself to limp along, using the trees as support. You can" << endl;
			cout << "hear the familiar sound of car engines in the distance." << endl;
			cout << "A hand closes around your wrist." << endl;
							
			//if the user grabed the knife from the kitchen then they are given the option to stab their attacker
			if (weapon[1] == 1 || weapon[0] == 1)
			{
				if (weapon[0] == 1 && weapon[1] == 1)
				{
					cout << "You're hands instinctivly tighten around the weapons you have gathered. In one the knife from the kitchen" << endl;
					cout << "in the other the wheel from the swivel chair. You turn around to face your attacker and lash out with the" << endl;
					cout << "knive, painting a bright red mark across the man's chest. He releases your wrist in surprise and stumbles" << endl; 
					cout << "backward a step but you pursue. A growl slips free from between your teeth as you raise your other hand" << endl;
					cout << "high in the air and aim for the eyes looking at you, wide with fear. The sharp edge of the broken wheel" << endl; 
					cout << "seems to fit perfectly in his socket and you watch as he crumples to the ground clutching at his face. There" << endl;
					cout << "is so much blood that you could swim in it." << endl << endl;
										
					cout << "You turn your back and return to your sprint through the jungle. It is only a moment before you reach a freeway." << endl;
				}
				
				else if (weapon[1] == 1)
				{
					cout << "You tighten your grip on the knife you grabbed from the kitchen and slash at your pursuer. The" << endl;
					cout << "man cries out in pain and stumbles backward, rage clouding his features. But you have the advantage." << endl;
									
					//prompting the user for number of stabs 
					cout << "How many times do you stab him?" << endl;
									
					//getting number from user
					cin >> stabs;
									
					//validating user input for fun
					while (stabs <= 0 || stabs > 20)
					{
						if (stabs < 0)
						{
							cout << "You want to unstab your attacker? This seems silly, would you like to try again?" << endl;
						}
						else 
						{
							cout << "Do you truly beleive that you could stab someone more than twenty times?" << endl;
							cout << "You should reevaluate the amount of energy that it takes to plunge a knife into someone's chest." << endl;
						}
										
						cout << "Please enter a more realistic number of stabs." << endl;
										
						cin >> stabs;
					}
										
						//for loop that prints message for each stab by user
						for (int count = 1; count <= stabs; count++)
						{
							cout << "You stab your attacker, blood splatters." << endl;
						}
										
						//story for escaping after stabbing attacker
						cout << "When you are done you are short of breath, you barely maintain the energy needed to make it to" << endl;
						cout << "the road you heard earlier. You drop the knife and wipe the blood off of your face, hoping that" << endl;
						cout << "someone will give you a ride." << endl<< endl;
	
					}
					
				
				else if (weapon[0] == 1)
				{
					cout << "All you have to defend yourself with is a broken wheel. A manic laugh builds in your chest but dies abruptly as" << endl;
					cout << "you are turned to face your pursuer. He is angry. You are scared. Much like a cornered animal snapping their jaws" << endl;
					cout << "you raise the broken wheel to eye level between the two of you. The man snorts. This gives you the time to really" << endl;
					cout << "pull back before you punch him. The jagged end of the broken wheel functions as a particularly brutal pair of brass" << endl;
					cout << "knuckles. Your fingers scream at you in pain, you think one of them might be broken. You also think, as the man" << endl;
					cout << "stumbles away from you and you return to your sprint through the jungle, that it was worth it." << endl << endl;
									
					cout << "It takes only a moment to deduce that the man is not following you, and then one more for you to reach the road that" << endl;
					cout << "you had heard in the distance." << endl;
				}
								
				cout << endl;
								
				//calling congratulations function to print congratulations!
				congratulations ();
								
				//writing the results of the play to the file
				outFile << "The player escaped!" << endl;
			}			
						
			//if the user did not decide to take a knife then they have nothing to defend themselves with and die :(
			else
			{
				cout << "You have nothing to defend yourself with. You have one moment to hysterically hope the meal that is cooked from" << endl;
				cout << "your body at least tastes good before the world goes dark." << endl << endl;
							 
				cout << "Game Over" << endl;
							 
				outFile << "The player died." << endl;
			}
							 
		}
						
		
		
		cout << endl << endl;
		cout << "Before we go on, would youlike to play a minigame?" << endl;
		cout << "Enter 1 for yes or 0 for no." << endl;
		
		cin >> choice7;
		
		choice7 = inputValidation (choice7, 0, 1);
		
		if (choice7 == 1)
		{
			miniGame();
		}
		else
		{
			cout << endl << "Alright." << endl << endl;
		}
		
		//If the user does not decide to play then a parting message is printed
		if (play == 'Q' || play == 'q')
		{
			cout << "We hate to see you go..." << endl;
		}
		
	cout << endl;
		
	//Reseting variables to 0 so that the choices made in game matter if user decides to play again
	time = 0;
	weapon[0] = 0;
	weapon[1] = 0;
	shoes = 0; 
		
	}
		
	//while loop conditions so that if the user enters q the game ends
	} while (!(play == 'Q' || play == 'q'));
	
	//Closing results file
	outFile.close();		
	
	//returning 0 to the computer to show end of program
	return 0;
}

//*************************************************
// inputValidation function
// This function validates the user's input based 
// on a a numberical range.
//
// Return Value
// ------------
// int                the choice for when user re-
//                    enters their choice     
//
// Parameters
// ------------
//  int choice         user's choice
//  int range1         the lowest number that the 
//                     user can enter as a choice
//  int range2         the highest number that the
//                     user can enter
//*************************************************
int inputValidation (int choice, int range1, int range2)
{
	while ( choice < range1 || choice > range2)
			{
				cout << "This is currently not one of your options." << endl;
				cout << "Please enter a valid option choice." << endl;
				
				cin >> choice;
			}
		
	return choice;
	cout << endl << endl;
			
}

//*************************************************
// congratulations function
// This function prints a congratulatory message
//
// Return Value
// ------------
// none     
//
// Parameters
// ------------
//  none
//*************************************************
void congratulations ()
{
	cout << "Congratulations!! You have escaped being eaten!!" << endl;
}


//*************************************************
// titleScreen function
// This function prints the splash screen
//
// Return Value
// ------------
// none     
//
// Parameters
// ------------
//  none
//*************************************************
void titleScreen ()
{
	
	
	//Clearing the screen for maximum effect
	cout << "\033[2J";
	
	//Printing the tittle screen
	cout<<  "            ███████╗░██████╗░█████╗░░█████╗░██████╗░███████╗░█████╗░██████╗░ ██████╗░ ███████╗"<<endl;
	cout<<  "            ██╔════╝██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔══██╗██╔══██╗ ██╔══██╗ ██╔════╝"<<endl;
	cout<<  "            █████╗░░╚█████╗░██║░░╚═╝███████║██████╔╝█████╗░░██║░░██║██████╔╝ ██████╦╝ █████╗░░"<<endl;
	cout<<  "            ██╔══╝░░░╚═══██╗██║░░██╗██╔══██║██╔═══╝░██╔══╝░░██║░░██║██╔══██╗ ██╔══██╗ ██╔══╝░░"<<endl;
	cout<<  "            ███████╗██████╔╝╚█████╔╝██║░░██║██║░░░░░███████╗╚█████╔╝██║░░██║ ██████╦╝ ███████╗"<<endl;
	cout<<  "            ╚══════╝╚═════╝░░╚════╝░╚═╝░░╚═╝╚═╝░░░░░╚══════╝░╚════╝░╚═╝░░╚═╝ ╚═════╝░ ╚══════╝"<<endl;
	cout<<"                            ███████╗░█████╗░████████╗███████╗███╗░░██╗"<<endl;
	cout<<"                            ██╔════╝██╔══██╗╚══██╔══╝██╔════╝████╗░██║"<<endl;
	cout<<"                            █████╗░░███████║░░░██║░░░█████╗░░██╔██╗██║"<<endl;
	cout<<"                            ██╔══╝░░██╔══██║░░░██║░░░██╔══╝░░██║╚████║"<<endl;
	cout<<"                            ███████╗██║░░██║░░░██║░░░███████╗██║░╚███║"<<endl;
	cout<<"                            ╚══════╝╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚═╝░░╚══╝"<<endl;
	cout <<"    +syhhhdddddddhhhhhhhhhho//+sshhhhhhhhhhhhhhyhhhhhhhhhhyhhhhhhhhhhyyyyyyyyyyyyysyyyyyyyyyy  "   <<endl;
	cout <<"      .hh/:oysyhhhhhhhhhh:    .yhs+yshhhosy:.-ooyhhyhhy::+sshhhhhhhhhyyyyyyyyyyyyyhhhhhhho/    " <<endl;
	cout <<"        ys    :syhhh++syhh      y+   -yhs       sys` o-    .sshhhhhhhhyyyhhhhhhhhho/ohhy:`       "   <<endl;
	cout <<"     -ho     .hhy-  .syo      o:    +y/       :h/  y+     `+yhhhhhy/:ooyhhhoyshs   -h-     "        <<endl;
	cout <<"       +yh      y:     -ho      o/    -y        `d-  -.       :hh/hh`  .hyhho  ..     h`      "    <<endl;
	cout <<"       `:.      s:     .hs      :-    .h        `d             so yy    /hhh/        `h-       "    <<endl;
	cout <<"                yo     /sh`           :h`       .d`            oy -:     .yh:         /.        "   <<endl;
	cout <<"                yy     ++h.           oh:       .h:           `hh.        oo/                "   <<endl;
	cout <<"                ``     `ys            sh+       .h-           +hh:        :oo                 "    <<endl;
	cout <<"                       /h            :s:       oh-           +sh:        .oh                  "  <<endl;
	cout <<"                         h/                    `yh/            ::         -sh                 "    <<endl;
	cout <<"                         y+                     -/`                       -hh                  "   <<endl;
	cout <<"                         h+                                               +hy                  "   <<endl;
	cout <<"                        :hh`                                             `hhh`                 "   <<endl;
	cout <<"                        +sh-                                             .syh`                "    <<endl;
	cout <<"                        `:-                                               .-.               "<<endl;

}

int waitStory ()
{
	cout << "You stay where you are and wait. " << endl;
	
	int time = 0;
	int choice = 1;
	int choice2;
						
	//A while loop that continues displaying the option for waiting or searching the room until the user 
	//either chooses to search or they wait for long enough. 
	while ( choice == 1 && time < 5)
	{
		//incrimenting time
		time++;
							
		//Displaying how long the user has waited
		cout << "You wait for " << time << "0 minutes." << endl << endl;
							
		//Prompting the user to make choice again
		cout << "Will you continue waiting or will you search the room?" << endl;
		cout << "1. Wait" << endl;
		cout << "2. Search The Room" << endl;
							
		//getting choice from user
		cin >> choice;
							
		//Input validation 
		while ( choice < 1 || choice > 2)
			{
				cout << "This is currently not one of your options." << endl;
				cout << "Please enter a valid option choice." << endl;
				
				cin >> choice;
			}
							
							
	}
						
	//If statment for after the user exits the while loop. 
	if (time >= 5)
	{
		//Printing story for if they wait long enough
		cout << "You hear footsteps coming down the hallway. Each one echoes like" << endl;
		cout << "a giants. Your heart seems to speed up for no reason." << endl << endl;
							
		//Prompting the user to make a choice
		cout << "What do you do?" << endl;
		cout << "1. Run" << endl;
		cout << "2. Hide" << endl;
							
		//Getting the user's choice
		cin >> choice2;
							
		cout << endl;
							
		//Input validtion 
		while ( choice2 < 1 || choice2 > 2)
			{
				cout << "This is currently not one of your options." << endl;
				cout << "Please enter a valid option choice." << endl;
				
				cin >> choice2;
			}
							
		//Switch statement for their decision to either run or hide. 
		//Both options end in death and the user is brought back to the the menu at the beginning of the game
		switch (choice2)
		{
			//Prints the story for if they decide to run
			case 1: cout << "You bolt from the room like a wild animal, the door is thankfully" << endl;
					cout << "unlocked, and walking down the hallway is a monster of a man." << endl;
					cout << "You quickly scan the hallway, the man's face creasing in confusion" << endl; 
					cout << "when he sees you it quickly decends into anger. There is only" << endl;
					cout << "one way out of the hallway you have launched yourself into and it" << endl;
					cout << "is through the monster who has started walking faster toward you." << endl;
					cout << "You turn, frantically, to the door slightly down the hallway thinking" << endl;
					cout << "that maybe, maybe there is a way out there, but the man is upon you" << endl;
					cout << "before you can take even one more step." << endl << endl;
										
					cout << "Game Over" << endl;
									
							
					break;
										
			//Prints story for if they decide to hide		
			case 2: cout << "There is only one place in the room that you could possible hide. You" << endl;
					cout << "dive under the desk and drag the swivel chair with great difficulty," << endl;
					cout << "due to the missing wheel, in front of you. If feels like a horribly" << endl; 
					cout << "insignificant barrier. The door creaks open and a man hovers in the" << endl;
					cout << "doorway. He has to duck slightly to get into the room and your pulse" << endl;
					cout << "seems to spike the same number of inches that he needs to bend. His" << endl;
					cout << "eyes find yours almost instantly." << endl << endl;
										
					cout << "Game Over" << endl;
										
					break;
		}
	
		return 1;
		
	}
	else
	{
		return 0;
	}
}


void miniGame()
{
	//Define Variables
	int secretNum, guess, count = 1, choice;
	
	//Define Constants
	const int low = 1;
	const int high = 100;
	
	
	do
	{
	//Get the system time
	unsigned seed = time (0);
	
	//Seed the random number generator
	srand(seed);
	
	//Displaying the Prompt
	cout << "I will choose a number between 1 and 100! Try to guess what number I have picked!" << endl;
	
	//Choosing the random number
	secretNum = (rand() % (high - low + 1)) + low;
	
	//Allow the player to enter a guess
	cin >> guess;
	
	//if statment displays a special congratulations if the user guessed correctly on the first tyr
	if (guess == secretNum)
	{
		cout << "Congradulations! You guessed the secert number on your first try! :O" << endl << endl;
	}
	
	//otherwise the user will be allowed to guess over and over until they guess the number
	else
	{
	while (guess != secretNum)
	{
		if(guess > secretNum)
		{
			cout << "The secret number is a little bit smaller than that!" << endl;
			cout << "Guess again: ";
			
			cin >> guess;
		}
		else //(guess > secretNum)
		{
			cout << "The seeret number is a little bit bigger than that!" << endl;
			cout << "Guess again: ";
			
			cin >> guess;
		}
		
		//a counter of how many guesses are entered
		count++;
	}
	
	//congratulations message
	cout << "Congratulations! It only took you " << count << " tries to guess the secret number!" << endl << endl;
	
	}
	
	//asking the user if they would like to play again
	cout << "Would you like to play again?" << endl;
	cout << "Enter 1 for yes and 0 for no." << endl;
	
	//getting the users choice
	cin >> choice;
	
	//validating input
	while ( choice < 0 || choice > 1)
			{
				cout << "This is currently not one of your options." << endl;
				cout << "Please enter a valid option choice." << endl;
				
				cin >> choice;
			}
			
	// displaying a message based on choice
	if (choice == 1)
	{
		cout << "Okay dokay!" << endl << endl;
	}
	else
	{
		cout << "Bye bye!" << endl << endl;
	}
	
	//reseting count to display correct number of guesses if user plays again
	count = 0;
	
	//condition for do while loop
	}while (choice != 0);
}

//Ending Notes: I konw that the code is a little bit messy ;-; and could definatly be improved even more but this is what I can do with the time we have. 
//To make it neater I think I would want to recode it from the beginning with functions and arrays more in mind.

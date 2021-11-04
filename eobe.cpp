//********************************************************************
// Names: Savannah Stephenson, 
// 		  Janavi Bhalal,
//  	          Alicia Mares,
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
using namespace std;

int inputValidation (int choice, int range1, int range2);
void congradulations ();

int main ()
{
	char play;
	
	string playerName;
	
	int choice, time = 0, choice2, choice3, binderChoice, shoeChoice, shoes = 0, choice4, choice5, knifeChoice, knife = 0, stabs;
	
	cout << "Escape Or Be Eaten" << endl << endl << endl; // need to make more elaborite splashscreen
	
	
	do
	{
		cout << "Would you like to play?" << endl;
		cout << "Enter P to play or Q to quit." << endl;
		cin >> play;
		
		while ((play < 'P' || play > 'Q') && (play < 'p' || play > 'q'))
		{
			cout << "Your indecision is not appreciated, please enter P to play or Q to quit." << endl;
			cin >> play;
		}
		
		if ( play == 'p' || play == 'P' )
		{
			cout << "You wake up slowly. You are only aware of a select few things as you reaquaint" << endl;
			cout << "yourself with existance. It is cold, the ground is hard, and something is very" << endl;
			cout << "very wrong." << endl << endl;
				 
			cout << "The room you are in is sparce, the walls bare and painted with peeling white paint" << endl;
			cout << "that might once have been called eggshell. You have a headache and getting up from" << endl;
			cout << "the ground feels like a great undertaking. The hardwood is sticky and, you feel the" << endl;
			cout << "need to reiterate, cold, under your bare feet. There is a small desk fit underneath" << endl;
			cout << "the window with a few drawers buit in and a swivel chair with one of the weels broken" << endl;
			cout << "off. You cant remember where you were before this but you know that you did not come" << endl;
			cout << "to this place of your own free will. Your head pounds." << endl << endl;
				 
			cout << "What do you do?" << endl;
			cout << "1. Wait" << endl;
			cout << "2. Search The Room" << endl;
			
			cin >> choice;
			
			cout << endl;
			
			choice = inputValidation (choice, 1, 2);
			
			cout << endl;
			
			switch (choice)
			{
				case 1: cout << "You stay where you are and wait. " << endl;
						
						while ( choice == 1 && time < 5)
						{
							time++;
							cout << "You wait for " << time << "0 minutes." << endl;
							cout << "Will you continue waiting or will you search the room?" << endl;
							cout << "1. Wait" << endl;
							cout << "2. Search The Room" << endl;
							
							cin >> choice;
							
							choice = inputValidation (choice, 1, 2);
							
							
						}
						
						if (time >= 5)
						{
							cout << "You hear footsteps coming down the hallway. Each one echos like" << endl;
							cout << "a giants. Your heart seems to speed up for no reason." << endl << endl;
							
							cout << "What do you do?" << endl;
							cout << "1. Run" << endl;
							cout << "2. Hide" << endl;
							
							cin >> choice2;
							
							cout << endl;
							
							choice2 = inputValidation (choice2, 1, 2);
							
							switch (choice2)
							{
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
						}
						
						else 
						{
				case 2: do
						{
							cout << "There are a few things in the room that you can investigate." << endl; 
							cout << "1. Look at the desk" << endl;
							cout << "2. Look at the swivel chair" << endl;
							cout << "3. Look at the window" << endl;
							cout << "4. Look at the door" << endl;
							cout << "5. You are done searching" << endl << endl;
							
							cin >> choice3;
							
							cout << endl;
							
							choice3 = inputValidation (choice3, 1, 5);
							
							switch (choice3)
							{
							case 1 : cout << "The desk is an old creature, when you pull out the first of the two drawers" << endl;
									 cout << "it squeaks horribly and the sound of it echoing in the nearly emptly room" << endl;
									 cout << "makes you flinch. Inside of the first drawer there is a stack of loose paper" << endl;
									 cout << "and a small binder labled 'Recipies'. You pick it up." << endl << endl; 
									 
									 cout << "Do you want to open the binder?" << endl;
									 cout << "Enter 1 for yes or 2 for no." << endl;
									 
									 cin >> binderChoice;
									 
									 binderChoice = inputValidation (binderChoice, 1, 2);
									 
									 if (binderChoice == 1) 
									 {
										 cout << "The first page has the layout of a typical recipie card, this recipie serves one," << endl;
										 cout << "takes an hour to prep and an hour and a half to cook, and is named smoked ribs." << endl; 
										 cout << "The one disconceritng thing is that in the blank that traditionally says 'from" << endl;
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
										 cout << "You cannot help but notice that every single recipie included meat." << endl;
									 }
									 else
									 {
										 cout << "You put the binder back in the drawer and look at the loose papers, it seems to" << endl; 
										 cout << "a collection of old flight tickets, each with different names but all leaving the same" << endl; 
										 cout << "island resort that you vaugly remember enjoying before you ended up where you are" << endl; 
										 cout << "now. Your head hurts. You think for a second you see your name admist the tickets," << endl;
										 cout << "but when you shuffle through them to find it again you aren't able to." << endl;
									 }
									 
									 cout << "You close the first drawer and open the second one. Inside your shoes sit inocentlly like" << endl;
									 cout << "they belong inside of a strange desk drawer." << endl; 
									 cout << "Do you take them?" << endl;
									 cout << "Enter 1 for yes or 2 for no." << endl;
									 
									 cin >> shoeChoice;
									 
									 shoeChoice = inputValidation (shoeChoice, 1, 2);
									 
									 if (shoeChoice == 1) 
									 {
										 cout << "You take your shoes out of the drawer and shove them onto your feet." << endl; 
										 cout << "You feel slightly better." << endl;
										 shoes = 1; 
									 }
									 else
									 {
										 cout << "You feel like your shoes have betrayed you by be being inside of an unfarmiliar drawer" << endl;
										 cout << "and decide to leave them where they are." << endl;
										 shoes = 0;
									 }
									 
									 cout << "You close the second drawer and turn back to the room." << endl << endl;
									 
									 break;
							case 2 : cout << "The swivel chair has one of it's wheels missing, there are some scratches in the ground" << endl;
									 cout << "from where the leg without a wheel has been dragged across the hardwood." << endl;
									 
									 cout << "You turn back to the room." << endl << endl; 
									 
									 break;
							case 3 : cout << "Outside the window all you can see is green. Unfarmiliar plants seem to crowd the rectangular opening," << endl; 
									 cout << "begging for your attention with their waxy leaves and sharp points. When you try to open the window it stayes" << endl;
									 cout << "resolutly shut. You squint at the lock and scoff at your silliness as you untwist the latch. You put all of" << endl;
									 cout << "your force behind your next attempt but the window still will not open. Dread begins to pool in your stomach." << endl; 
									 cout << "There are lines scratched into the windowsill. Tracing them with your fingers makes you think of someone clawing" << endl; 
									 cout << "desperatly at the unopenable window." << endl;
									 
									 cout << "You turn back to the room." << endl << endl;
									 
									 break;
							case 4 : cout << "The door is pained a slightly lighter shade of white when compared to the walls and this does nothing to hide the" << endl;
									 cout << "red smudge that makes itself at home in the lower right hand corner of the door. When you grasp the door knob it" << endl; 
									 cout << "turns easily, at least you are not completly trapped." << endl;
									 
									 cout << "You turn back to the room." << endl << endl;
									 break;
							case 5 : cout << "You start to feel anxious, and decide that you are done looking around. The only option left now is action." << endl << endl;
									 break;
									 
							}
									 
						}while (choice3 != 5);
						
						cout << "Upon exiting the room you find yourself in a narrow hallway. There are two doors that you can see," << endl;
						cout << "one is at the end of the hallway and feels distincly like an exit, the other is only slightly down" << endl;
						cout << "the hallway and is cracked open just enough that you can see the moving colors of a television." << endl << endl;
						
						cout << "What direction do you go?" << endl;
						cout << "1. Toward the ajar door" << endl;
						cout << "2. Toward the far door" << endl;
						
						cin >> choice4;
						
						choice4 = inputValidation (choice4, 1, 2);
						
						switch (choice4)
						{
							case 1 : cout << "As you approach you can see more of the room through the crack of the door." << endl;
									 cout << "The television is playing jepordy and just as you reach the door, hand reaching" << endl;
									 cout << "out to touch the handle, you hear a voice chime in with the answer to one of" << endl;
									 cout << "the questions. You decide against investigating the room." << endl;
							case 2 : cout << "You keep your steps light as you head toward the far door. Each time your foot" << endl;
									 cout << "meets the ground you have a breif moment of panic, worried about squeeky floor" << endl;
									 cout << "boards. When you finally get the the front door you are so releived that you" << endl;
									 cout << "take a moment to look around. The hallway opens up into an entryway that gives" << endl;
									 cout << "access to a kitchen and a dining room." << endl << endl;
									 break;
						}
						
						cout << "What do you do?" << endl;
						cout << "1. Leave" << endl;
						cout << "2. Investigate the kitchen" << endl;
						cout << "3. Investigate the dining room" << endl;
						
						cin >> choice5;
						
						choice5 = inputValidation (choice5, 1, 3);
						
						cout << endl;
						
						switch (choice5)
						{
							case 1: break;
							case 2: cout << "Entering the kitchen feels dangerous. The stainless steal appliances are too" << endl;
									cout << "clean and the collection of knives is much, much too large." << endl << endl;
									
									cout << "Do you take one of the knives?" << endl;
									cout << "Enter 1 for yes and 2 for no." << endl;
									
									cin >> knifeChoice;
									
									knifeChoice = inputValidation(knifeChoice, 1, 2);
									
									cout << endl;
									
									if (knifeChoice == 1)
									{
										cout << "You feel a little bit better having a weapon in your hand." << endl << endl;
										knife = 1;
									}
									else
									{
										cout << "You want to throw up just thinking about holding one of these knives." << endl << endl;
										knife = 0;
									}
									break;
							case 3: cout << "The dining room has only one place setting. There is a recipie card on the table." << endl << endl;
							
									cout << "Please type in your full name." << endl;
									
									playerName = cin.get(); //PLEASE SOMEONE TELL ME HOW TO LET THEM TYPE IN THEIR NAME IDK WHY THIS ISN'T WORKING, IT JUST SKIPS OVER LETTING THEM TYPE WHYYYYYYY
									
									cout << endl << endl;
									
									cout << "It reads: Pulled Meat Sandwitches, from " << playerName << endl;
									
									cout << "You have never made pulled meat sandwitches in your life." << endl;
									
									break;
						}
						
						cout << "Walking out of the door seems almost too easy." << endl << endl;
						
						cout << "That would be an accurate feeling, as the moment you step foot over the threshhold you feel the" << endl;
						cout << "faintest pull of fishing wire against your shin as a trip wire goes off. A windchime jingles at" << endl;
						cout << "you threteningly and you break out into a run at the same time you hear a door make inpact with" << endl;
						cout << "a wall from behind you." << endl;
						
						if (shoes == 1)
						{
							cout << "Twigs cruch under your steps as you sprint through the vegitation. You praise your own decision" << endl;
							cout << "to grab your shoes each time your foot makes inpact with the unforgiving ground. Someone is hot" << endl;
							cout << "on your heels but you manage to outpace them while ducking through the trees. You have never been" << endl;
							cout << "so releived to see a freeway." << endl << endl;
							
							congradulations();
						}
						else
						{
							cout << "The moment you delve into the forest you start to curse your lack of shoes. Twigs snap under your" << endl;
							cout << "rapidly moving feet and one especially motivated branch has punctured the bottom of your foot. The" << endl;
							cout << "pain is nealry unbarable but you force yourself to limp along, using the trees as support. You can" << endl;
							cout << "hear the farmiliar sound of car engines in the distance." << endl;
							cout << "A hand closes around your wrist." << endl;
							if (knife == 1)
							{
								cout << "You tighten your grip on the knife you grabbed from the kitchen and slash at your pursuer. The" << endl;
								cout << "man cries out in pain and stumbles backward, rage clouding his features. But you are at the advantage." << endl;
								cout << "How many times do you stab him?" << endl;
								
								cin >> stabs;
								
								while ( stabs < 0 || stabs > 20)
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
								
								cout << endl;
								
								for (int count = 1; count <= stabs; count++)
								{
									cout << "You stab your attacker, blood splatters." << endl;
								}
								
								cout << "When you are done you are short of breath, you barely maintain the energy needed to make it to" << endl;
								cout << "the road you heard earlier. You drop the knife and wipe the blood off of your face, hoping that" << endl;
								cout << "someone will give you a ride." << endl<< endl;
								
								congradulations ();
							}
							else
							{
							 cout << "You have nothing to defend yourself with. You have one moment to hysterically hope the meal that is cooked from" << endl;
							 cout << "your body at least tastes good before the world goes dark." << endl;
							}
						}
						
						}
 
			}
						
		}
		
		else 
		{
			cout << "We hate to see you go..." << endl;
		}
		
		cout << endl;
		
		time = 0;
		knife = 0;
		shoes = 0;
		
		//kinda want to find a way for the computer to wait a few seconds before printing the menue again. 
		
	} while (!(play == 'Q' || play == 'q'));
	
	return 0;
}

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

void congradulations ()
{
	cout << "Congradulations!! You have escaped being eaten!!" << endl;
} 

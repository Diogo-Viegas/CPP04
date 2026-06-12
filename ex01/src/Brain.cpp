#include "Brain.hpp"

Brain::Brain()
{
std::string petThoughts[100] = {
        // --- DOG THOUGHTS (1-50) ---
        "I just met you, but I love you more than life itself.",
        "Why did the human put my poop in a bag? Is it valuable?",
        "BALL! BALL! BALL! BALL! BALL!",
        "If I bark at the mailman, he leaves. I am the protector of this house.",
        "The floor is cold, but your lap is warm. Decision made.",
        "I can hear a cheese wrapper opening from three miles away.",
        "The squirrel insulted my entire family lineage. I must climb this tree.",
        "Did you say 'WALK'? I think you said 'WALK'!",
        "I am a good boy. The human said so, therefore it is a absolute truth.",
        "Why does the water in the porcelain bowl taste so much better?",
        "Please don't leave for work. I've been waiting for you for a million years.",
        "If I stare at the food long enough, it might fall by telekinesis.",
        "The vacuum cleaner is an evil demon that must be destroyed.",
        "Scratch the spot right behind my left ear and I will kick my leg.",
        "I swallowed a bee. It vibrated all the way down. 10/10 would not recommend.",
        "Smelling this fire hydrant is like reading the morning newspaper.",
        "I have a tail! Wait, where did it go? Ah, there it is! Gotcha!",
        "The human is crying. I must deploy emergency face licks immediately.",
        "My bed is comfortable, but sleeping directly across your pillow is better.",
        "I am 80 pounds of pure muscle, but that tiny chihuahua terrified me.",
        "Mud is just nature's lotion. Let me shake it off on the white carpet.",
        "Is that a car ride? Oh boy, the wind in my jowls is majestic.",
        "I don't know what you did with that stick, but you are a wizard.",
        "Rub my belly or I will gently press my wet nose against your hand.",
        "I will guard you while you use the bathroom. You are vulnerable there.",
        "The cat just looked at me. I feel judged on a spiritual level.",
        "Everything is a toy if you chew on it long enough.",
        "I brought you a dead leaf. You're welcome.",
        "If I stretch my legs fully, I take up 95% of the king-sized bed.",
        "Shadows on the wall are suspicious. I must alert the authorities.",
        "I love the smell of dirty socks in the morning.",
        "The bath is a torture device. Why do you do this to me?",
        "I'm not begging, I'm just conducting a highly intense visual inspection of your steak.",
        "The vet is a nice place until they take you to the back room.",
        "I dug a hole. It's an excellent hole. Come see my hole.",
        "The human is home! Best. Day. Ever. Again!",
        "I am sneaking up on the bird. I am a stealth ninja... oops, barked.",
        "Peanut butter is both a blessing and a structural trap for my tongue.",
        "Why do you put clothes on me? I am already wearing a permanent coat.",
        "The rug is the perfect place to slide my face after eating.",
        "If I sit on your foot, you cannot leave me.",
        "That plastic bag drifting in the wind is a threat to national security.",
        "I don't care if it's raining, the grass needs my urine.",
        "I tried to catch the red dot, but it has no flavor.",
        "You've been gone for five minutes. I assumed you died.",
        "Let me lick your shins right after you get out of the shower.",
        "The couch cushions belong on the floor. It improves the room's feng shui.",
        "I am snoring, but I dream of chasing the cosmic rabbit.",
        "Throw it. Just throw it. No take, only throw.",
        "You are my favorite person in the history of universe.",

        // --- CAT THOUGHTS (51-100) ---
        "Human, my food bowl is 2% empty. I am on the verge of starvation.",
        "Meow at 3:00 AM because the hallway has excellent acoustics.",
        "If it fits, I sits. The laws of physics do not apply to me.",
        "You bought me a $50 bed, but this cardboard box is my true kingdom.",
        "I see a bug on the ceiling. Time to activate the chirp-chirp mechanism.",
        "Knocking this glass off the table is a necessary scientific experiment.",
        "Your keyboard is the ideal location for my afternoon nap.",
        "I will allow exactly three belly rubs. The fourth rub will result in violence.",
        "Pathetic bipedal servant, clean my sand box at once.",
        "The door is closed. This is an insult to my royal authority. Open it so I can ignore it.",
        "I am the master of this domain. You just pay the mortgage.",
        "Look at my hind leg while I clean myself. Look at the elegance.",
        "I brought you a half-alive mouse because you are a terrible hunter.",
        "I shall zoom through the house at Mach 3 for absolutely no reason.",
        "The red dot mocks me. One day, I will bleed it.",
        "Sleep for 18 hours, judge the humans for 6. A perfect day.",
        "I will sit on your chest and stare into your soul until you wake up.",
        "Your plants look delicious. Let me eat them and throw them up later.",
        "I am a creature of grace and dignity... oh look, a hairtie! *scrambles wildly*",
        "Why do you touch my paws? They are forbidden beans.",
        "I hear you calling my name. I choose to ignore it so you know your place.",
        "The sunbeam has moved three inches. I must migrate.",
        "Your black pants need a fresh coating of my white fur.",
        "I will purr loudly to manipulate you into giving me wet food.",
        "The dog is an idiot. A loud, loyal, easily tricked idiot.",
        "I am convinced there is a ghost living in that specific empty corner.",
        "Do not touch the tail. The tail operates on an independent emotional axis.",
        "I could destroy you, but you provide the chin scratches.",
        "The scratchpost is nice, but the side of your expensive sofa feels superior.",
        "I am liquid. I can flow into any space I desire.",
        "Why do you look at screens when you could be looking at my majestic face?",
        "I will step directly on your bladder at 6:00 AM.",
        "The water in my bowl is stagnant. I demand water from the dripping faucet.",
        "I have decided that this random piece of string is my most prized possession.",
        "You think you adopted me? Cute. I adopted you as my primary caretaker.",
        "I will bite your ankles from under the couch as a test of your reflexes.",
        "The dog's food tastes better, purely because it belongs to the dog.",
        "I am staring at the wall. There is nothing there. Or is there?",
        "If I lick your hand, it means you need cleaning. You taste like chips.",
        "My claws require sharpening. Your leather chair will suffice.",
        "I am top of the refrigerator. I am the god of the kitchen.",
        "Don't carry me like a baby... actually, okay, this is acceptable for 10 seconds.",
        "The sound of the can opener is the song of my people.",
        "I will bite you gently to show affection. If I draw blood, it was a typo.",
        "Why do you close the bathroom door? What are you hiding in there?",
        "I have successfully tangled your shoelaces. Try leaving now.",
        "The plastic wrap on the package must be chewed immediately.",
        "I am not fat, I am fluffy and aerodynamically optimized for maximum comfort.",
        "You are sitting in my spot. Move, or suffer the intense, unblinking stare.",
        "Human, you may worship me now. From a distance."
    };
    for(int i = 0; i < 100; i++)
    {
        _ideas[i] = petThoughts[i];   
    }
}
Brain::Brain(const Brain &copy)
{
	*this = copy;
}
Brain &Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
	}
	return (*this);

}
Brain::~Brain()
{

}
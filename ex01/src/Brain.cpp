#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    _ideas[0] = "Is it time for food yet?";
    _ideas[1] = "I should nap right here in the middle of the floor.";
    _ideas[2] = "What was that sudden noise?";
    _ideas[3] = "I love my human so much.";
    _ideas[4] = "Let me stare intensely at this blank wall.";
    _ideas[5] = "The sunbeam moved, so I must move too.";
    _ideas[6] = "I wonder what is inside that closed room.";
    _ideas[7] = "Please open this door immediately.";
    _ideas[8] = "Scratch right behind my ears, please.";
    _ideas[9] = "I smelled something incredibly interesting just now.";
    _ideas[10] = "Time to stretch my entire body.";
    _ideas[11] = "Why is the human looking at that glowing rectangle again?";
    _ideas[12] = "I think I hear a bag crinkling in the kitchen.";
    _ideas[13] = "I am going to run across the house for no reason at all.";
    _ideas[14] = "This couch belongs entirely to me.";
    _ideas[15] = "I must protect this house from the mail carrier.";
    _ideas[16] = "Let me just sit on whatever my human is trying to read.";
    _ideas[17] = "A moving shadow! I must investigate.";
    _ideas[18] = "I am very comfortable right now.";
    _ideas[19] = "If I look sad enough, maybe they will share their food.";
    _ideas[20] = "I need to drink some water right this second.";
    _ideas[21] = "That flying insect must be captured.";
    _ideas[22] = "I will just rest my head right here.";
    _ideas[23] = "Where did everyone go?";
    _ideas[24] = "Oh look, my favorite human is home!";
    _ideas[25] = "I am going to ignore you for a little bit.";
    _ideas[26] = "What happens if I knock this object over?";
    _ideas[27] = "I think I deserve another treat.";
    _ideas[28] = "Let me follow you into the bathroom.";
    _ideas[29] = "This toy is my absolute favorite possession.";
    _ideas[30] = "I can hear a bird outside the window.";
    _ideas[31] = "Time to lick my paws until they are perfectly clean.";
    _ideas[32] = "I am going to sleep for the next six hours.";
    _ideas[33] = "The floor is nice and cool.";
    _ideas[34] = "I need to inspect this new cardboard box.";
    _ideas[35] = "Don't stop petting me yet.";
    _ideas[36] = "I hear footsteps in the hallway.";
    _ideas[37] = "Let me spin around three times before I lie down.";
    _ideas[38] = "What did you just put in my bowl?";
    _ideas[39] = "I want to look outside the window for a while.";
    _ideas[40] = "You have been gone for way too long.";
    _ideas[41] = "I am the real boss of this household.";
    _ideas[42] = "Something smells like outdoor adventures.";
    _ideas[43] = "I will just squeeze myself into this tiny space.";
    _ideas[44] = "Did somebody say the word 'treat'?";
    _ideas[45] = "I must keep my eyes on that squirrel.";
    _ideas[46] = "Why are you making that high-pitched voice at me?";
    _ideas[47] = "I am going to hide under the bed for a while.";
    _ideas[48] = "This blanket is exceptionally soft.";
    _ideas[49] = "I think someone is at the front door.";
    _ideas[50] = "Let me sniff your hand to see where you have been.";
    _ideas[51] = "My belly needs some rubs right now.";
    _ideas[52] = "I am too tired to do anything today.";
    _ideas[53] = "I will pretend I didn't hear you call my name.";
    _ideas[54] = "Everything tastes better when it drops on the floor.";
    _ideas[55] = "I am going to wake up early tomorrow just because.";
    _ideas[56] = "Why is the vacuum cleaner so loud and terrifying?";
    _ideas[57] = "I want to be exactly where the people are.";
    _ideas[58] = "Let me dig into this blanket to make a perfect nest.";
    _ideas[59] = "I am watching your every move.";
    _ideas[60] = "Can I have a bite of whatever you are eating?";
    _ideas[61] = "I feel like pacing around the room.";
    _ideas[62] = "The rain outside looks very unappealing.";
    _ideas[63] = "I just want to be held and cuddled.";
    _ideas[64] = "That spot on the rug looks perfect for a nap.";
    _ideas[65] = "I am going to scratch at this door until it opens.";
    _ideas[66] = "I am full of sudden energy!";
    _ideas[67] = "The human's bed is much better than my bed.";
    _ideas[68] = "Let me show you how happy I am to see you.";
    _ideas[69] = "I wonder what that taste was.";
    _ideas[70] = "I am going to sit right on your lap.";
    _ideas[71] = "The wind outside sounds exciting.";
    _ideas[72] = "I must claim this new piece of furniture.";
    _ideas[73] = "Why did you stop scratching me?";
    _ideas[74] = "I think I will just stare at you until you feed me.";
    _ideas[75] = "I am completely content with my life right now.";
    _ideas[76] = "Let me poke you with my nose to get attention.";
    _ideas[77] = "I smell another animal nearby.";
    _ideas[78] = "This pillow belongs to me now.";
    _ideas[79] = "I am going to yawn really loudly.";
    _ideas[80] = "I don't like it when it's too noisy in here.";
    _ideas[81] = "Are we going to do something fun now?";
    _ideas[82] = "I am going to chew on this for a bit.";
    _ideas[83] = "I need to find the warmest spot in the house.";
    _ideas[84] = "Why are you moving away from me?";
    _ideas[85] = "I will guard this specific spot on the rug.";
    _ideas[86] = "My ears can hear things humans can only dream of.";
    _ideas[87] = "Let me stretch my back legs out.";
    _ideas[88] = "I feel like a very good boy or girl today.";
    _ideas[89] = "That reflection in the mirror looks suspicious.";
    _ideas[90] = "I am going to follow the scent trail.";
    _ideas[91] = "You are my favorite entity in the universe.";
    _ideas[92] = "I think I heard the fridge door open.";
    _ideas[93] = "Let me rest my chin on your leg.";
    _ideas[94] = "I just want to relax and do absolutely nothing.";
    _ideas[95] = "I will keep you safe from all invisible monsters.";
    _ideas[96] = "The air smells different today.";
    _ideas[97] = "I am ready for my evening routine.";
    _ideas[98] = "Please don't leave the house without me.";
    _ideas[99] = "Life is good when there is food and sleep.";
}
Brain::Brain(const Brain &copy)
{
	*this = copy;
    std::cout << "Brain copy constructor called\n";
}
Brain &Brain::operator=(const Brain &copy)
{
    int i = 0;
    while(i < 100)
    {
        _ideas[i] = copy._ideas[i];
        i++;
    }
    std::cout << "Brain copy assignment constructor called\n";
    return (*this);
}
Brain::~Brain()
{ 
    std::cout << "Brain deconstructor called\n";
}
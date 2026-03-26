#include "Game.h"

Game::Game()
{


	std::cout << "╔══════════════════════════════╗\n";
	std::cout << "║          BLACKJACK ♠         ║\n";
	std::cout << "╚══════════════════════════════╝\n\n";
	char buffer[80];
	std::string option = "";
	while (option.compare("n") != false)
	{
		this->deck.shuffleDeck();
		this->player.reset();
		this->dealer.reset();
		this->runGame();
		std::cout << "\nPress any key : To Continue, Press \"n\" : To End Program \n";
		std::cout << "input: ";
		std::cin.getline(buffer, 80);
		option = buffer;
	}
	std::cout << "\nPress any key to end program!\n";
	std::cin.getline(buffer, 80);
	
}

void Game::printHands()
{
	std::cout << "\n";
	std::cout << "Player hand: " << this->player.ShowHand() << "  value: " << std::to_string(this->player.handValue) << "\n"
	<< "Dealer hand: " << this->dealer.ShowHand() << "  value: " << std::to_string(this->dealer.handValue) << "\n";
	std::cout << "\n";
}

void Game::runGame()
{
	for (int i = 0; i < 2; i++) {
		this->player.hit(*this->deck.takeCard());
	}

	for (int i = 0; i < 2; i++) {
		Card card = *this->deck.takeCard();
		if (i == 1)
			card.faceUp = false;
		this->dealer.hit(card);
	}

	char buffer[80];
	int option = 0;
	std::cout << "\n";
	while (this->player.cardCount != 5 && !this->player.bust && option != 2)
	{
		std::cout << "1 : To Hit\n2 : To Stand\n3 : To End Game";
		this->printHands();
		std::cout << "input: ";
		std::cin.getline(buffer, 80);
		option = atoi(buffer);

		if (option == 1) {
			std::cout << "Player Hits!\n\n";
			this->player.hit(*this->deck.takeCard());
		}
		if (option == 3)
			return;
	}
	this->dealer.turnCard(1);
	this->dealer.tallyScore();

	this->printHands();
	if (this->player.bust)
	{
		std::cout << "Player Busts! \n";
		if (this->dealer.bust)
			std::cout << "Its a DRAW!";
		else
			std::cout << "Player LOOSES!\n";
	}

	else {
		while (this->dealer.handValue < this->player.handValue && !this->dealer.bust) {
			this->dealer.hit(*this->deck.takeCard());
			std::cout << "Dealer Hits!\n";
			this->printHands();
			std::cout << "\n";
		}
		if (this->dealer.handValue > this->player.handValue && !this->dealer.bust)
			std::cout << "Dealer WINS!";
		else if (this->dealer.handValue == this->player.handValue && !this->dealer.bust)
			std::cout << "Its a DRAW!";
		else if (this->dealer.bust) {
			std::cout << "Dealer Busts!\n";
			std::cout << "Player WINS!\n";
		}

	}
}

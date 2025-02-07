#include "../header/Recipe.hpp"

RecipeNode::RecipeNode(const Ingredient _data) {
	data = _data;
	next = nullptr;
}

//------------------------------------------------/
Recipe::Recipe() {
	head = nullptr;
}

Recipe::~Recipe() {
	while (!Empty()) {
		RemoveFront();
	}
}

bool Recipe::Empty() const {
	if (head == nullptr) {
		return true;
	}
	return false;
}

void Recipe::AddFront(const Ingredient _data)
{
	RecipeNode* NewNode = new RecipeNode(_data);
	NewNode->next = head;
	head = NewNode;
}

void Recipe::RemoveFront()
{
	RecipeNode* temp = head;
	head = temp->next;
	delete temp;
}





Ingredient::Ingredient(const string _key, const string _name, const int _Amount, const bool _Unit)
	: key(_key), name(_name), Amount(_Amount), Unit(_Unit)
{}

Code : Search in Tries
Implement the function SearchWord for the Trie class.
For a trie, write the function for searching a word. Return true if found successfully otherwise return false.
Note : main function is given for your reference which we are using internally to test the code.

	
/*************************************************************** SOLUTION **********************************************************/
	
	
#include <string>
#include <vector>
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = true;          /////all node should be true becaz patter should be present middle in the string
	}
};
/*      ////////////////check for it///////////
6
the moon shines brightly at night
ig
*/

class Trie {
	TrieNode *root;

	public :
	int count;

	Trie() {
		this->count = 0;
		root = new TrieNode('\0');
	}

	bool insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			/*if (!root->isTerminal) {
				root -> isTerminal = true;
				return true;	
			} else {
				return false;
			}*/
            return true;
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}

		// Recursive call
		return insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}
    bool search(TrieNode *root,string word)
    {
        if(word.size()==0 && root->isTerminal==true)
            return true;
        else if(word.size()==0 && root->isTerminal!=true)
            return false;
        
        int index=word[0]-'a';
        
        if(root->children[index]!=NULL)
            return search(root->children[index],word.substr(1));
        else
            return false;
        
            
    }
    bool search(string word) {
        // Write your code here
        return search(root,word);
        
    }

};

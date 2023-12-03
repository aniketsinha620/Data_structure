/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addOne(Node *head)
{
	Node *ptr = head;
	int sum = 0;
	while (ptr)
	{
		sum = sum * 10 + ptr->data;
		ptr = ptr->next;
	}
	sum += 1;
	Node *curr = nullptr;
	int temp = 0;
	while (sum)
	{
		int x = sum % 10;
		temp = temp * 10 + x;
		sum = sum / 10;
	}
	while (temp)
	{
		Node *curr = nullptr;
	}
}

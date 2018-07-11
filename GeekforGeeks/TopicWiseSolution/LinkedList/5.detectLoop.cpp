/*
Given a linked list, check if the the linked list has a loop. Linked list can contain self loop.
*/
bool detectLoop(struct Node *h)
{
    unordered_set<Node *> s;
    while (h != NULL)
    {
        // If we have already has this node
        // in hashmap it means their is a cycle
        // (Because you we encountering the
        // node second time).
        if (s.find(h) != s.end())
            return true;
 
        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(h);
 
        h = h->next;
    }
 
    return false;
}

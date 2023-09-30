
// void deletealtele(Node* head){
//     Node* temp = head;
//     int curr_pos = 2;
//     while(temp != NULL && temp->next != NULL){
//         if(curr_pos % 2 == 0){
//             Node* deletenode = temp->next;
//             temp->next = temp->next->next;
//             free(deletenode);
//         }
//         temp = temp->next;
//         curr_pos++;
//     }
// }
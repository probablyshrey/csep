#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node *next;
};

// Create a new node
struct Node* createNode(int coeff, int exp) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;

    return newNode;
}

// Insert term in decreasing order of exponent
// Also combines terms having the same exponent
void insert(struct Node **head, int coeff, int exp) {

    struct Node *temp = *head;
    struct Node *prev = NULL;

    // Check if exponent already exists
    while (temp != NULL) {
        if (temp->exp == exp) {
            temp->coeff += coeff;
            return;
        }

        if (temp->exp < exp)
            break;

        prev = temp;
        temp = temp->next;
    }

    struct Node *newNode = createNode(coeff, exp);

    // Insert at beginning
    if (prev == NULL) {
        newNode->next = *head;
        *head = newNode;
    }
    else {
        newNode->next = temp;
        prev->next = newNode;
    }
}

// Add two polynomials
struct Node* addPolynomial(struct Node *p1, struct Node *p2) {

    struct Node *result = NULL;

    while (p1 != NULL) {
        insert(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        insert(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

// Display polynomial
void display(struct Node *head) {

    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp);

        if (head->next != NULL)
            printf(" + ");

        head = head->next;
    }

    printf("\n");
}

int main() {

    struct Node *poly1 = NULL;
    struct Node *poly2 = NULL;
    struct Node *result = NULL;

    int n, coeff, exp;

    printf("Enter number of terms in first polynomial: ");
    scanf("%d", &n);

    printf("Enter coefficient and exponent:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &exp);
        insert(&poly1, coeff, exp);
    }

    printf("Enter number of terms in second polynomial: ");
    scanf("%d", &n);

    printf("Enter coefficient and exponent:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &exp);
        insert(&poly2, coeff, exp);
    }

    printf("\nFirst polynomial: ");
    display(poly1);

    printf("Second polynomial: ");
    display(poly2);

    result = addPolynomial(poly1, poly2);

    printf("Sum: ");
    display(result);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct PokemonCard {
    char name[50];
    int stage;
    int hp;
};

int ends_with(char *input, char letter) {
    int length = strlen(input);
    if (length > 0 && input[length - 1] == letter) {
        return 1; // Ends with the specified letter
    }
    return 0; // Doesn't end with the specified letter
}

int calculate_price(struct PokemonCard card) {
    int price = 50; // Base price

    price += card.hp;

    if (card.stage == 2) {
        price += 80;
    } else if (card.stage == 1) {
        price += 30;
    }

    if (ends_with(card.name, 'X')) {
        price += 200;
    }

    return price;
}

int main() {
    int numCards;
    scanf("%d", &numCards);
    getchar();

    struct PokemonCard cards[numCards];

    for (int i = 0; i < numCards; i++) {
        fgets(cards[i].name, sizeof(cards[i].name), stdin);
        cards[i].name[strcspn(cards[i].name, "\n")] = '\0';
        scanf("%d", &cards[i].stage);
        scanf("%d", &cards[i].hp);
        getchar();
        printf("\n");
    }

    int total_price = 0;
    for (int i = 0; i < numCards; i++) {
        printf("Name: %s\n", cards[i].name);
        printf("Stage: %d\n", cards[i].stage);
        printf("HP: %d\n", cards[i].hp);

        int card_price = calculate_price(cards[i]);
        printf("Price: %d\n\n", card_price);

        total_price += card_price;
    }

    printf("Total price of all the cards = %d\n", total_price);

    return 0;
}


#include <stdio.h>

int main()
{
    int door;
    int choice;

    printf("========================================\n");
    printf("        🏚️ THE MYSTERY DOOR 🏚️\n");
    printf("========================================\n");

    printf("\nYou wake up inside an abandoned mansion...\n");
    printf("There are three mysterious doors in front of you.\n");

    printf("\n🔴 Door 1 - The Crimson Door\n");
    printf("🔵 Door 2 - The Blue Door\n");
    printf("⚫ Door 3 - The Shadow Door\n");

    printf("\nWhich door will you enter? (1-3): ");
    scanf("%d", &door);

    switch (door)
    {
        case 1:
            printf("\nYou enter the Crimson Door...\n");
            printf("You find a treasure chest! 💎\n");

            printf("\nDo you open it?\n");
            printf("1. Yes\n");
            printf("2. No\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nThe chest is filled with GOLD! 👑\n");
                printf("You escaped the mansion RICH! 💰\n");
            }
            else
            {
                printf("\nYou leave the chest untouched...\n");
                printf("A wise decision. Or maybe not... 👀\n");
            }
            break;

        case 2:
            printf("\nYou enter the Blue Door...\n");
            printf("You discover a secret library! 📚\n");

            printf("\nYou find an ancient book.\n");
            printf("Do you read it?\n");
            printf("1. Read the book\n");
            printf("2. Leave it\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nThe book reveals the secret exit! 🗝️\n");
                printf("You escape safely! ✨\n");
            }
            else
            {
                printf("\nYou leave the book behind...\n");
                printf("You remain trapped in the mansion! 🏚️\n");
            }
            break;

        case 3:
            printf("\nYou enter the Shadow Door...\n");
            printf("Everything suddenly goes completely dark. 🌑\n");

            printf("\nYou see two paths.\n");
            printf("1. Follow the glowing path\n");
            printf("2. Follow the dark path\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nYou discover a hidden portal! 🌀\n");
                printf("You have escaped into another world! 🌌\n");
            }
            else
            {
                printf("\nYou disappear into the darkness...\n");
                printf("The mystery remains unsolved. 👁️\n");
            }
            break;

        default:
            printf("\nThat door doesn't exist! 😭\n");
            printf("The mansion rejects your choice...\n");
    }

    printf("\n========================================\n");
    printf("          END OF YOUR ADVENTURE\n");
    printf("========================================\n");

    return 0;
}
#include <stdio.h>

int main()
{
    int choice;

    printf("========================================\n");
    printf("          🌙 NIGHT VIBE SELECTOR 🌙\n");
    printf("========================================\n");

    printf("\nHow are you feeling today?\n");
    printf("\n1. 🌿 Peaceful");
    printf("\n2. 🎧 In the Music Mood");
    printf("\n3. 💻 Productive");
    printf("\n4. 🎨 Creative");
    printf("\n5. 🌌 Deep Thinker");
    printf("\n6. 💤 Completely Tired");

    printf("\n\nChoose your vibe (1-6): ");
    scanf("%d", &choice);

    printf("\n----------------------------------------\n");

    switch (choice)
    {
        case 1:
            printf("🌿 Peaceful Mode Activated!\n");
            printf("Slow down. Enjoy the quiet moments.\n");
            break;

        case 2:
            printf("🎧 Music Mode Activated!\n");
            printf("Put on your favorite playlist and disappear into the vibe.\n");
            break;

        case 3:
            printf("💻 Productivity Mode Activated!\n");
            printf("One small task at a time. Keep building.\n");
            break;

        case 4:
            printf("🎨 Creative Mode Activated!\n");
            printf("Create something that exists only because YOU imagined it.\n");
            break;

        case 5:
            printf("🌌 Deep Thinker Mode Activated!\n");
            printf("Sometimes it's okay to just sit and think about everything and nothing.\n");
            break;

        case 6:
            printf("💤 Recharge Mode Activated!\n");
            printf("Close the laptop. Rest is productive too.\n");
            break;

        default:
            printf("❌ Unknown Vibe!\n");
            printf("Choose a number between 1 and 6.\n");
    }

    printf("----------------------------------------\n");
    printf("✨ Thanks for using the Night Vibe Selector! ✨\n");

    return 0;
}
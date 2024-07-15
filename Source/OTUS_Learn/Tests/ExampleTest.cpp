// OTUS Learn Project. Made by Alex Sinkin (c)


#include "OTUS_Learn/Tests/ExampleTest.h"
#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"
#include "TestActor.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(TestActor, "OTUS_LearnGame.TestActor",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::HighPriority | EAutomationTestFlags::ProductFilter);

bool TestActor::RunTest(const FString& Parameters)
{
	TestTrueExpr(FMath::Max(1,100) == 100);
	return true;
}



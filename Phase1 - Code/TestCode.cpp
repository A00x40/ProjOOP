#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x,y;

	//Create Input and Output objects to test
	Output *pOut = new Output();
	Input *pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	
	//			Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Drawing all the Figures with all possible states: 
	//			Non-filled, Filled, and highlighted in both cases			
	///////////////////////////////////////////////////////////////////////////////////
	
	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	GfxInfo gfxInfo;//to be used with draw function of the class Ouput
	Point P1, P2, P3;

	/// 2.1- Rectangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	// 2.1.1 - Drawing non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawRect(P1, P2, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);


	// 2.1.3 - Drawing a filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRect(P1, P2, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.2- Line Test ///
	/// ============== 
	pOut->PrintMessage("Drawing a Line, normal and Highlighted, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	///TODO: Add code to draw Line, Normal and Highlighted

	//2.2.1
	pOut->PrintMessage("Drawing a Line ==> Normal,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	
	gfxInfo.isFilled = false;
	pOut->DrawLine(P1, P2, gfxInfo, false);
	//2.2.2
	pOut->PrintMessage("Drawing a Line ==> Highlighted , Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawLine(P1, P2, gfxInfo, true);
	

	pOut->PrintMessage("Drawing a Line Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.3- Triangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Triangle, filled  Highlighted INVERTED,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	///TODO: Add code to draw Triangle in all possible states

	//2.3.1
	pOut->PrintMessage("Drawing a Triangle ==> non-filled,  Click three  points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	
	gfxInfo.isFilled = false;
	gfxInfo.isINVERTED = false;
	pOut->DrawTriangle(P1, P2,P3, gfxInfo, false);

	//2.3.2
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawTriangle(P1, P2,P3, gfxInfo, true);

	//2.3.3
	pOut->PrintMessage("Drawing a Triangle ==>  filled,  Click three  points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	
	gfxInfo.isFilled = true;
	gfxInfo.isINVERTED = false;
	pOut->DrawTriangle(P1, P2,P3, gfxInfo, false);

	//2.3.4
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawTriangle(P1, P2,P3, gfxInfo, true);

	//2.3.5
	pOut->PrintMessage("Drawing a Triangle ==> INVERTED,  Click three  points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	
	gfxInfo.isFilled = false;
	gfxInfo.isINVERTED = true;
	pOut->DrawTriangle(P1, P2,P3, gfxInfo, false);

	//2.3.6
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted INVERTED, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawTriangle(P1, P2,P3, gfxInfo, true);

	pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.4- Rhombus Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Rhombus, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	// 2.4.1 - Drawing non-filled rectangle
	pOut->PrintMessage("Drawing a Rombus ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	int iWidth=10,iHeight=10;
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	
	
	
	
	///TODO: Add code to draw Ellipse in all possible states

	/// 2.5- Ellipse  Test ///
	/// =================== 
	pOut->PrintMessage("Drawing an Ellipse, filled  Highlighted INVERTED,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	//2.5.1
	pOut->PrintMessage("Drawing an Ellipse ==> non-filled,  Click two  points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	
	gfxInfo.isFilled = false;
	gfxInfo.isINVERTED = false;
	pOut->DrawEllipse(P1, P2, gfxInfo, false);

	//2.5.2
	pOut->PrintMessage("Drawing an Ellipse ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawEllipse(P1, P2, gfxInfo, true);

	//2.5.3
	pOut->PrintMessage("Drawing an Ellipse ==>  filled,  Click two  points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	
	gfxInfo.isFilled = true;
	gfxInfo.isINVERTED = false;
	pOut->DrawEllipse(P1, P2, gfxInfo, false);


	//2.5.4
	pOut->PrintMessage("Drawing a Ellipse ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawEllipse(P1, P2, gfxInfo, true);

	//2.5.5
	pOut->PrintMessage("Drawing a Ellipse ==> INVERTED,  Click two  points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	
	gfxInfo.isFilled = false;
	gfxInfo.isINVERTED = true;
	pOut->DrawEllipse(P1, P2, gfxInfo, false);


	//2.5.6
	pOut->PrintMessage("Drawing an Ellipse ==> Highlighted INVERTED, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawEllipse(P1, P2, gfxInfo, true);

	pOut->PrintMessage("Drawing an Ellipse Test ==> OK,  Click anywhere to continue");

	
	pOut->PrintMessage("Drawing a Ellipse Test ==> OK,  Click anywhere to continue");
	

	

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();
	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	pOut->PrintMessage("Testing Input ability to read strings");

	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar
	
	pIn->GetSrting(pOut);
	
	// 2- After reading the stirng clear the status bar
	pOut->ClearStatusBar();
	// 3- print on the status bar "You Entered" then print the string
	pOut->PrintMessage("You Entered");
	


	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: 
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;
	
	///TODO:  
	//You must add a case for each action (both Draw mode and Play mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case DRAW_RECT:
				pOut->PrintMessage("Action: Draw a Rectangle , Click anywhere");
				break;

		case DRAW_LINE:
				pOut->PrintMessage("Action: Draw a Line , Click anywhere");
				break;

		case DRAW_RHOMBUS:
				pOut->PrintMessage("Action: Draw a Rhombus , Click anywhere");
				break;

		case DRAW_ELLIPSE:
				pOut->PrintMessage("Action: Draw an Ellipse , Click anywhere");
				break;

		case DRAW_TRI:
				pOut->PrintMessage("Action: Draw a Triangle , Click anywhere");
				break;
		case Copy:
				pOut->PrintMessage("Action: Copy , Click anywhere");
				break;
		case Cut:
			    pOut->PrintMessage("Action: Cut , Click anywhere");
				break;
		case Paste:
				pOut->PrintMessage("Action: Paste , Click anywhere");
				break;
        case SAVE:
			    pOut->PrintMessage("Action: save , Click anywhere");
				break;
		case SAVE_BY_TYPE:
			    pOut->PrintMessage("Action: savetype , Click anywhere");
				break;
		
		case DEL:
			    pOut->PrintMessage("Action: Delete , Click anywhere");
				break;
		case LOAD:
			    pOut->PrintMessage("Action: Load , Click anywhere");
				break;
		case CHNG_DRAW_CLR:
				pOut->PrintMessage("Action: Change Figure's drawing color , Click anywhere");
				break;

		case CHNG_FILL_CLR:
				pOut->PrintMessage("Action: Change Figure's Fill color , Click anywhere");
				break;
			
		case STATUS:
				pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
				break;
 
		case DRAWING_AREA:
				pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
				break;

		case EMPTY:
				pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
				break;

		case TO_DRAW:
				pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
				
				break;

		case TO_PLAY:
				pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
				pOut->CreatePlayToolBar();
				break;


		case EXIT:				
				break;
		}
	}while(ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);


	delete pIn;
	delete pOut;	
	return 0;
}

#include "Editor\Editor.h"

int main()
{
	Editor editor;
	editor.Init();

	while (true)
	{
		editor.Update();
		editor.Render();
	}


	return 0;
}
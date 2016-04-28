#ifndef PAUSE_MENU_PANEL_H
#define PAUSE_MENU_PANEL_H

#include "Panel.h"

// The pause menu background will be redesigned to fit new options and things.
// The old pause menu had the game world interface still drawn in it, which was 
// pretty pointless.

// The pause menu buttons are off center by a little bit.

class Button;
class TextBox;

class PauseMenuPanel : public Panel
{
private:
	std::unique_ptr<TextBox> titleTextBox, loadTextBox, mainMenuTextBox, 
		optionsTextBox, resumeTextBox;
	std::unique_ptr<Button> loadButton, mainMenuButton, optionsButton, resumeButton;
protected:
	virtual void handleEvents(bool &running) override;
	virtual void handleMouse(double dt) override;
	virtual void handleKeyboard(double dt) override;
public:
	PauseMenuPanel(GameState *gameState);
	virtual ~PauseMenuPanel();

	virtual void tick(double dt, bool &running) override;
	virtual void render(SDL_Surface *dst, const SDL_Rect *letterbox) override;
};

#endif
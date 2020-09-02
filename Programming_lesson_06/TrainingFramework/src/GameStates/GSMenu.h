#pragma once
#include "gamestatebase.h"
#include "GameButton.h"
class GSMenu :
	public GameStateBase
{
public:
	GSMenu();
	~GSMenu();
	
	void Init();
	void Exit();

	void Pause();
	void Resume();

	void HandleEvents();
	void HandleKeyEvents(int key, bool bIsPressed);
	void HandleTouchEvents(int x, int y, bool bIsPressed);
	void Update(float deltaTime);
	void Draw();
	void ChangePlayerLeft();
	void ChangePlayerRight();

private:
	std::shared_ptr<Sprite2D> m_BackGround;
	std::list<std::shared_ptr<GameButton>>	m_listButton;
	std::shared_ptr<Text>  m_Text_gameName;
	std::vector< std::shared_ptr<Sprite2D>> m_ArrWater;
	std::vector< std::shared_ptr<Player>> m_ListPlayer;
	std::shared_ptr<Sprite2D> m_ArrowLeft;
	std::shared_ptr<Sprite2D> m_ArrowRight;
};

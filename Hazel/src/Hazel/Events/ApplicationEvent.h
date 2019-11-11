#pragma once

#include "Hazel/Events/Event.h"

namespace Hazel {

	class WindowMovedEvent : public Event
	{
	public:
		WindowMovedEvent(int xPos, int yPos)
			: m_XPos(xPos), m_YPos(yPos) {}

		inline int GetXPos() const { return m_XPos; }
		inline int GetYPos() const { return m_YPos; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowMovedEvent: " << m_XPos << ", " << m_YPos;
			return ss.str();
		}

		EVENT_CLASS_TYPE(WindowMoved)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	private:
		int m_XPos, m_YPos;
	};
	
	class WindowResizedEvent : public Event
	{
	public:
		WindowResizedEvent(unsigned int width, unsigned int height)
			: m_Width(width), m_Height(height) {}

		inline unsigned int GetWidth() const { return m_Width; }
		inline unsigned int GetHeight() const { return m_Height; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowResizedEvent: " << m_Width << ", " << m_Height;
			return ss.str();
		}

		EVENT_CLASS_TYPE(WindowResized)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	private:
		unsigned int m_Width, m_Height;
	};

	class WindowClosedEvent : public Event
	{
	public:
		WindowClosedEvent() {}

		EVENT_CLASS_TYPE(WindowClosed)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};

	class WindowFocusedEvent : public Event
	{
	public:
		WindowFocusedEvent() {}

		EVENT_CLASS_TYPE(WindowFocused)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};

	class WindowFocusLostEvent : public Event
	{
	public:
		WindowFocusLostEvent() {}

		EVENT_CLASS_TYPE(WindowFocusLost)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};

	class AppTickedEvent : public Event
	{
	public:
		AppTickedEvent() {}

		EVENT_CLASS_TYPE(AppTicked)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};

	class AppUpdatedEvent : public Event
	{
	public:
		AppUpdatedEvent() {}

		EVENT_CLASS_TYPE(AppUpdated)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};

	class AppRenderedEvent : public Event
	{
	public:
		AppRenderedEvent() {}

		EVENT_CLASS_TYPE(AppRendered)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};
}
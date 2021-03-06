#pragma once
#include "VisualWindow.h"

using namespace Windows::Foundation;

namespace Marduk
{
    namespace Controls
    {
        public interface class ILayout
        {
        public:
            property double Width {double get(); };
            property Size LayoutSize {Size get(); };
            property int UnitCount {int get(); };

            void AddItem(int index, Platform::Object^ item, Size size);
            void ChangeItem(int index, Platform::Object^ item, Size size);
            void RemoveItem(int index);
            void RemoveAll();

            Platform::IntPtr GetVisableItems(VisualWindow window, int* firstIndex, int* lastIndex);
            Rect GetItemLayoutRect(int index);
            bool FillWindow(VisualWindow window);
            void ChangePanelSize(double width);
            Size GetItemSize(int index);
        };
    }
}

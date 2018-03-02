// Copyright 2011 Boris Kogan (boris@thekogans.net)
//
// This file is part of libthekogans_canvas.
//
// libthekogans_canvas is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// libthekogans_canvas is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with libthekogans_canvas. If not, see <http://www.gnu.org/licenses/>.

#include "thekogans/canvas/Rectangle.h"
#include "thekogans/canvas/Point.h"

namespace thekogans {
    namespace canvas {

        bool Point::InRectangle (const Rectangle &rectangle) const {
            return
                x >= rectangle.origin.x &&
                x <= rectangle.origin.x + rectangle.extents.width &&
                y >= rectangle.origin.y &&
                y <= rectangle.origin.y + rectangle.extents.height;
        }

    } // namespace canvas
} // namespace thekogans

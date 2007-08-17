//  $Id: status_line.cxx,v 1.11 2003/04/22 16:40:41 grumbel Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 1999 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#include <stdio.h>

#include <ClanLib/Display/Font/font.h>
#include <ClanLib/Display/Input/mouse.h>
#include <ClanLib/Display/Display/display.h>
#include "../pingus_resource.hxx"
#include "../fonts.hxx"
#include "editor_view.hxx"
#include "status_line.hxx"
#include "editorobj.hxx"

namespace EditorNS {

StatusLine::StatusLine()
{
  font = Fonts::courier_small;
}

StatusLine::~StatusLine()
{
}

void
StatusLine::draw(EditorView * view)
{
  char mouse_co[256];
  std::string status_line_text;

  if (current_objs)
    {
      if (current_objs->size() > 1)
	{
	  status_line_text = "Group";
	}
      else if (current_objs->size() == 1)
	{
	  status_line_text = (*(current_objs->begin()))->status_line();
	}
      else
	{
	  status_line_text = "";
	}
    }

  font->print_left(50, 5, status_line_text.c_str());

  Vector pos = view->screen_to_world(Vector (CL_Mouse::get_x(), CL_Mouse::get_y ()));
  snprintf(mouse_co, 256, "X:%-3d Y:%-3d", static_cast<int>(pos.x), static_cast<int>(pos.y));

  font->print_left(CL_Display::get_width() - 100, 5, mouse_co);
}

void
StatusLine::set_current_objs(const std::vector<EditorObj*>* c_objs)
{
  current_objs = c_objs;
}

} // namespace EditorNS

/* EOF */

//  $Id: root_gui_manager.cxx,v 1.5 2002/08/14 12:45:02 torangan Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 2000 Ingo Ruhnke <grumbel@gmx.de>
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

#include <iostream>
#include <list>
#include "root_gui_manager.hxx"

using namespace GUI;
using namespace Input;

RootGUIManager::RootGUIManager (Input::Controller* c)
  : controller(c)
{  
}

RootGUIManager::~RootGUIManager ()
{
}

void
RootGUIManager::update (float delta)
{
  assert (!"ERROR RootGUIManager absolete");
  assert (controller);
  //GUIManager::update (delta);
  //process_input (controller->get_events ());
  
  if (delta);
}

/* EOF */

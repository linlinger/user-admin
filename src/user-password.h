/*   mate-user-admin 
*   Copyright (C) 2018  zhuyaliang https://github.com/zhuyaliang/
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.

*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.

*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef __USER_PASSWORD_H__
#define __USER_PASSWORD_H__

#include <gtk/gtk.h>
#include <act/act.h>
        
G_BEGIN_DECLS

#define USER_TYPE_PASSWORD (user_password_get_type ())

G_DECLARE_FINAL_TYPE (UserPassword, user_password, USER, PASSWORD, GtkDialog)

UserPassword     *user_password_new      (ActUser *user);

GtkWidget        *dialog_add_button_with_icon_name (GtkDialog   *dialog,
                                                    const gchar *button_text,
                                                    const gchar *icon_name,
                                                     gint         response_id);
 
G_END_DECLS


#endif

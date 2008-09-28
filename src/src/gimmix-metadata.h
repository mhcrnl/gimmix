#ifndef GIMMIX_METADATA_H
#define GIMMIX_METADAT_H

#include "gimmix-core.h"
#include "gimmix.h"
#include "wejpconfig.h"
#include <gtk/gtk.h>

/* initialize gimmix-metadata */
void gimmix_metadata_init (void);

/* Disable widgets */
void gimmix_metadata_disable_controls (void);

void gimmix_metadata_enable_controls (void);


/* show/hide metadata song cover */
void gimmix_metadata_show_song_cover (gboolean show);

#endif

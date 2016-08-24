#ifndef _SCOUTFS_FILERW_H_
#define _SCOUTFS_FILERW_H_

extern const struct address_space_operations scoutfs_file_aops;
extern const struct file_operations scoutfs_file_fops;

void scoutfs_filerw_free_alloc(struct super_block *sb);

#endif
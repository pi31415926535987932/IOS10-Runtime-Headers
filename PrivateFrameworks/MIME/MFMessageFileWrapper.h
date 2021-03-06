//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface MFMessageFileWrapper : NSObject
{
    NSString *_path;
    NSString *_filename;
    NSString *_preferredFilename;
    NSData *_data;
    NSMutableDictionary *_attributes;
    NSString *_linkDestination;
    NSString *_url;
    int _type;
}

- (id)description;
- (void)dealloc;
- (id)fileAttributes;
- (void)setFileAttributes:(id)arg1;
- (id)regularFileContents;
- (id)symbolicLinkDestination;
- (id)fileWrappers;
- (_Bool)isDirectory;
- (_Bool)isRegularFile;
- (_Bool)isSymbolicLink;
- (id)filename;
- (void)setFilename:(id)arg1;
- (id)preferredFilename;
- (void)setPreferredFilename:(id)arg1;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (void)setURL:(id)arg1;
- (id)URL;
- (_Bool)isPlaceholder;
- (void)setPath:(id)arg1;
- (id)path;
- (id)initWithPath:(id)arg1;
- (_Bool)isUnzippableFile;
- (_Bool)isPDFFile;
- (_Bool)isImageFile;
- (void)_isImage:(_Bool *)arg1 orPDFFile:(_Bool *)arg2;
- (unsigned long long)fileSize;
- (id)fileProtection;
- (void)setFileProtection:(id)arg1;
- (id)icsRepresentation;
- (void)setICSRepresentation:(id)arg1;
- (id)meetingStorePersistentID;
- (void)setMeetingStorePersistentID:(id)arg1;
- (id)eventUniqueID;
- (void)setEventUniqueID:(id)arg1;
- (id)messageID;
- (void)setMessageID:(id)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (id)inferredMimeType;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (unsigned short)finderFlags;
- (void)setFinderFlags:(unsigned short)arg1;
- (unsigned int)creator;
- (void)setCreator:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;

@end


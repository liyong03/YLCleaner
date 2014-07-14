/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXFileDocument.h>

#import "NSTextStorageDelegate-Protocol.h"

@class NSString, NSTextStorage<XCTextStorageAdditions>;

@interface PBXTextFileDocument : PBXFileDocument <NSTextStorageDelegate>
{
    NSTextStorage<XCTextStorageAdditions> *_textStorage;
    struct __tfdFlags {
        unsigned int immutable:1;
        unsigned int lineEnding:2;
        unsigned int isClosing:1;
        unsigned int settingsAreSet:1;
        unsigned int usesTabs:1;
        unsigned int isUnicodeWithBOM:1;
        unsigned int isUnicodeBE:1;
        unsigned int wrapsLines:1;
        unsigned int usingDefaultLanguage:1;
        unsigned int notifyOnClose:1;
        unsigned int RESERVED:21;
    } _tfdFlags;
    unsigned long long _fileEncoding;
    long long _tabWidth;
    long long _indentWidth;
    NSString *_sourceLanguage;
}

+ (void)setSyntaxColoringEnabled:(BOOL)arg1;
+ (BOOL)syntaxColoringEnabled;
+ (id)emptyTextFileDocument;
+ (id)emptyTextFileDocumentNamed:(id)arg1 withContents:(id)arg2 withDocument:(id)arg3;
+ (id)emptyTextFileDocumentNamed:(id)arg1 withContents:(id)arg2;
+ (id)fileEncodingListForUI;
+ (int)defaultLineEndingForSave;
+ (void)setDefaultLineEndingForSave:(int)arg1;
+ (int)defaultLineEnding;
+ (void)setDefaultLineEnding:(int)arg1;
+ (void)setShowsTextColorsWhenPrinting:(BOOL)arg1;
+ (BOOL)showsTextColorsWhenPrinting;
+ (BOOL)colorUnknownLanguages;
+ (Class)defaultTextViewSubclassForPrinting;
+ (Class)defaultTextStorageSubclass;
+ (Class)defaultFileEditorSubclass;
+ (void)initialize;
- (void)printShowingPrintPanel:(BOOL)arg1;
- (void)_printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)_retainedLayoutManagerForPrinting;
- (BOOL)isIndentable;
- (void)setFileType:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)methodAtLocation:(unsigned long long)arg1;
- (id)alphaSortedMethodsList;
- (id)methodsList;
- (id)debugInfoStringForFileNavigator;
- (id)stringContents;
- (BOOL)showAndSelectFromLine:(unsigned long long)arg1 toLine:(unsigned long long)arg2;
- (void)setOwnedTextStorage:(id)arg1;
- (id)textStorage;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)close;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (void)setUpTextStorage:(id)arg1;
- (int)_lineEndingUsedInString:(id)arg1;
- (id)bookmarkInProject:(id)arg1;
- (BOOL)writeWithBackupToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;
- (BOOL)codeAssistantInSession;
- (void)cancelCodeAssistantSession;
- (id)encodedDataForRange:(struct _NSRange)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)document:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)shouldRunSavePanelWithAccessoryView;
- (void)_stopUndoCoalescing;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)usesProgrammingLanguageBreaks;
- (void)setSourceLanguage:(id)arg1;
- (BOOL)usingDefaultSourceLanguage;
- (id)sourceLanguage;
- (void)setPBXFileType:(id)arg1;
- (void)setWrapsLines:(long long)arg1;
- (BOOL)wrapsLines;
- (void)_updateEditorsForLineWrapping;
- (void)setUsesTabs:(long long)arg1;
- (BOOL)usesTabs;
- (void)setIndentWidth:(long long)arg1;
- (long long)indentWidth;
- (void)setTabWidth:(long long)arg1;
- (long long)tabWidth;
- (void)setFileEncoding:(unsigned long long)arg1 convertContents:(BOOL)arg2;
- (unsigned long long)fileEncoding;
- (int)lineEnding;
- (void)setLineEnding:(int)arg1;
- (id)fileReferences;
- (BOOL)enforcesLineEndings;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (BOOL)wantsImportGraphics;
- (BOOL)wantsRichTextView;
- (void)_editorSettingsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1 ofType:(id)arg2;
- (id)init;
- (id)initWithFileReference:(id)arg1;
- (id)initWithFileReference:(id)arg1 ignoringExternalEditors:(BOOL)arg2;
- (void)setFileName:(id)arg1;
- (void)updateTextSettingsFromFileReference;
- (void)_takeSettingsFromFileReference:(id)arg1 path:(id)arg2 updating:(BOOL)arg3;
- (BOOL)_usesXCLanguage;
- (id)attributedStringDocumentType;
- (void)_postDumpChangeHistoryNotification;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CreativeEditingToolsLog : NSObject {

	char _hasDoodles;
	char _isCropped;
	char _isRotated;
	char _deleted;
	char _isPublished;
	unsigned _stickerFlowEntries;
	unsigned _stickerCount;
	unsigned _textFlowEntries;
	unsigned _textCount;
	unsigned _doodleFlowEntries;
	unsigned _cropFlowEntries;
	unsigned _filterSwipeCount;
	unsigned _gvFilterSelectionCount;
	NSString* _filterName;
	NSString* _mediaID;
	unsigned _galleryViewEditingEntries;
	unsigned _galleryViewEditingEntriesFromCancellationSheet;

}

@property (assign,nonatomic) unsigned stickerFlowEntries;                                          //@synthesize stickerFlowEntries=_stickerFlowEntries - In the implementation block
@property (assign,nonatomic) unsigned stickerCount;                                                //@synthesize stickerCount=_stickerCount - In the implementation block
@property (assign,nonatomic) unsigned textFlowEntries;                                             //@synthesize textFlowEntries=_textFlowEntries - In the implementation block
@property (assign,nonatomic) unsigned textCount;                                                   //@synthesize textCount=_textCount - In the implementation block
@property (assign,nonatomic) unsigned doodleFlowEntries;                                           //@synthesize doodleFlowEntries=_doodleFlowEntries - In the implementation block
@property (assign,nonatomic) char hasDoodles;                                                      //@synthesize hasDoodles=_hasDoodles - In the implementation block
@property (assign,nonatomic) unsigned cropFlowEntries;                                             //@synthesize cropFlowEntries=_cropFlowEntries - In the implementation block
@property (assign,nonatomic) char isCropped;                                                       //@synthesize isCropped=_isCropped - In the implementation block
@property (assign,nonatomic) char isRotated;                                                       //@synthesize isRotated=_isRotated - In the implementation block
@property (assign,nonatomic) unsigned filterSwipeCount;                                            //@synthesize filterSwipeCount=_filterSwipeCount - In the implementation block
@property (assign,nonatomic) unsigned gvFilterSelectionCount;                                      //@synthesize gvFilterSelectionCount=_gvFilterSelectionCount - In the implementation block
@property (nonatomic,copy) NSString * filterName;                                                  //@synthesize filterName=_filterName - In the implementation block
@property (assign,nonatomic) char deleted;                                                         //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) char isPublished;                                                     //@synthesize isPublished=_isPublished - In the implementation block
@property (nonatomic,copy) NSString * mediaID;                                                     //@synthesize mediaID=_mediaID - In the implementation block
@property (assign,nonatomic) unsigned galleryViewEditingEntries;                                   //@synthesize galleryViewEditingEntries=_galleryViewEditingEntries - In the implementation block
@property (assign,nonatomic) unsigned galleryViewEditingEntriesFromCancellationSheet;              //@synthesize galleryViewEditingEntriesFromCancellationSheet=_galleryViewEditingEntriesFromCancellationSheet - In the implementation block
-(char)hasDoodles;
-(NSString *)filterName;
-(NSString *)mediaID;
-(unsigned)stickerFlowEntries;
-(void)setStickerFlowEntries:(unsigned)arg1 ;
-(unsigned)stickerCount;
-(void)setStickerCount:(unsigned)arg1 ;
-(unsigned)textFlowEntries;
-(void)setTextFlowEntries:(unsigned)arg1 ;
-(unsigned)textCount;
-(void)setTextCount:(unsigned)arg1 ;
-(unsigned)doodleFlowEntries;
-(void)setDoodleFlowEntries:(unsigned)arg1 ;
-(void)setHasDoodles:(char)arg1 ;
-(unsigned)cropFlowEntries;
-(void)setCropFlowEntries:(unsigned)arg1 ;
-(void)setIsCropped:(char)arg1 ;
-(unsigned)filterSwipeCount;
-(void)setFilterSwipeCount:(unsigned)arg1 ;
-(unsigned)gvFilterSelectionCount;
-(void)setGvFilterSelectionCount:(unsigned)arg1 ;
-(void)setMediaID:(NSString *)arg1 ;
-(unsigned)galleryViewEditingEntries;
-(void)setGalleryViewEditingEntries:(unsigned)arg1 ;
-(unsigned)galleryViewEditingEntriesFromCancellationSheet;
-(void)setGalleryViewEditingEntriesFromCancellationSheet:(unsigned)arg1 ;
-(char)isPublished;
-(void)setIsPublished:(char)arg1 ;
-(void)setIsRotated:(char)arg1 ;
-(id)init;
-(char)isRotated;
-(char)deleted;
-(char)isCropped;
-(void)setDeleted:(char)arg1 ;
-(void)setFilterName:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNDirectMessageAttachment.h>
#import <Twitter/TFNDirectMessageMediaAttachment.h>
@class NSString, TFNTwitterEntityMedia, TFNTwitterMediaAsset;


@protocol TFNDirectMessageMediaAttachment <TFNDirectMessageAttachment>
@property (nonatomic,readonly) CGSize previewSize; 
@property (nonatomic,readonly) NSString * fullSizeURL; 
@property (nonatomic,readonly) CGSize fullSize; 
@property (nonatomic,readonly) char isPossiblySensitive; 
@property (nonatomic,readonly) TFNTwitterEntityMedia * entity; 
@property (nonatomic,readonly) TFNTwitterMediaAsset * mediaAsset; 
@property (nonatomic,readonly) unsigned mediaType; 
@property (nonatomic,readonly) double duration; 
@required
-(TFNTwitterMediaAsset *)mediaAsset;
-(char)isPossiblySensitive;
-(id)previewImageWithContentMode:(int)arg1;
-(NSString *)fullSizeURL;
-(unsigned)mediaType;
-(id)thumbnailImage;
-(double)duration;
-(CGSize)previewSize;
-(TFNTwitterEntityMedia *)entity;
-(CGSize)fullSize;

@end


@class NSString, TFNTwitterEntityMedia, TFNTwitterMediaAsset;

@interface TFNDirectMessageMediaAttachment : TFNDirectMessageAttachment <TFNDirectMessageMediaAttachment> {

	char _isPossiblySensitive;
	TFNTwitterMediaAsset* _mediaAsset;
	TFNTwitterEntityMedia* _entityMedia;
	NSString* _cacheID;
	CGSize _cachedPreviewSize;

}

@property (nonatomic,retain) TFNTwitterMediaAsset * mediaAsset;                          //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (nonatomic,retain) TFNTwitterEntityMedia * entityMedia;                        //@synthesize entityMedia=_entityMedia - In the implementation block
@property (assign,nonatomic) CGSize cachedPreviewSize;                                   //@synthesize cachedPreviewSize=_cachedPreviewSize - In the implementation block
@property (nonatomic,readonly) CGSize thumbnailSize; 
@property (nonatomic,copy) NSString * cacheID;                                           //@synthesize cacheID=_cacheID - In the implementation block
@property (assign,nonatomic) char isPossiblySensitive;                                   //@synthesize isPossiblySensitive=_isPossiblySensitive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFNDirectMessageContext> context; 
@property (nonatomic,readonly) int attachmentType; 
@property (assign,nonatomic,__weak) id<TFNDirectMessageEntry> messageEntry; 
@property (nonatomic,readonly) char renderable; 
@property (nonatomic,readonly) char supported; 
@property (nonatomic,readonly) CGSize previewSize; 
@property (nonatomic,readonly) NSString * fullSizeURL; 
@property (nonatomic,readonly) CGSize fullSize; 
@property (nonatomic,readonly) TFNTwitterEntityMedia * entity; 
@property (nonatomic,readonly) unsigned mediaType; 
@property (nonatomic,readonly) double duration; 
+(id)sharedImageLRUCache;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithMediaAsset:(id)arg1 ;
-(TFNTwitterMediaAsset *)mediaAsset;
-(char)isPossiblySensitive;
-(void)setMediaAsset:(TFNTwitterMediaAsset *)arg1 ;
-(void)cancelUpload;
-(char)renderable;
-(id)previewImageWithContentMode:(int)arg1 ;
-(NSString *)fullSizeURL;
-(void)_addMediaUploadListeners;
-(void)setCachedPreviewSize:(CGSize)arg1 ;
-(void)_cachePreviewImageOfType:(int)arg1 image:(id)arg2 ;
-(CGSize)cachedPreviewSize;
-(id)_cachedPreviewImageOfType:(int)arg1 ;
-(void)cleanupLocalData;
-(void)_regeneratePreviewImageOfType:(int)arg1 contentMode:(int)arg2 ;
-(TFNTwitterEntityMedia *)entityMedia;
-(void)setEntityMedia:(TFNTwitterEntityMedia *)arg1 ;
-(void)setIsPossiblySensitive:(char)arg1 ;
-(void)_assetUploadSuccess:(id)arg1 ;
-(void)_assetUploadFailed:(id)arg1 ;
-(void)_assetUploadCanceled:(id)arg1 ;
-(id)initWithMediaAsset:(id)arg1 previewSize:(CGSize)arg2 previewImage:(id)arg3 ;
-(void)addPreviewInformationFromMediaAttachment:(id)arg1 ;
-(void)beginUpload;
-(void)setParameterDataForRequestDictionary:(id)arg1 ;
-(char)isAlwaysShown;
-(NSRange)rangeInMessageText;
-(void)setCacheID:(NSString *)arg1 ;
-(id)previewURL;
-(NSString *)cacheID;
-(unsigned)mediaType;
-(id)thumbnailImage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)thumbnailSize;
-(CGSize)previewSize;
-(char)needsUpload;
-(TFNTwitterEntityMedia *)entity;
-(CGSize)fullSize;
-(id)thumbnailURL;
-(int)attachmentType;
-(char)supported;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, FBPhotoCropInfo, UIImage, FBCPUImageFilterState, NSString, FBGLFilter;

@interface FBPhotoAssetEdits : NSObject <NSCoding, NSCopying> {

	NSMutableArray* _tagsEdges;
	char _isCollage;
	char _isLivePhotoEnabled;
	char _is360PhotoEnabled;
	NSArray* _selectedFilters;
	FBPhotoCropInfo* _cropInfo;
	UIImage* _thumbnailStandard;
	UIImage* _thumbnailFiltered;
	UIImage* _thumbnailCropped;
	NSArray* _faceFeatures;
	NSArray* _uncroppedFaceFeatures;
	FBCPUImageFilterState* _cpuFilterState;
	UIImage* _photoOverlayAttachmentsLayer;
	NSArray* _photoOverlays;
	UIImage* _doodlesLayer;
	NSString* _sphericalParameters;

}

@property (nonatomic,copy) NSArray * selectedFilters;                                   //@synthesize selectedFilters=_selectedFilters - In the implementation block
@property (nonatomic,retain) FBPhotoCropInfo * cropInfo;                                //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,readonly) char isPhotoCropped; 
@property (nonatomic,readonly) UIImage * thumbnailPreFilter; 
@property (nonatomic,retain) UIImage * thumbnailStandard;                               //@synthesize thumbnailStandard=_thumbnailStandard - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailFiltered;                               //@synthesize thumbnailFiltered=_thumbnailFiltered - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailCropped;                                //@synthesize thumbnailCropped=_thumbnailCropped - In the implementation block
@property (nonatomic,copy) NSArray * faceFeatures;                                      //@synthesize faceFeatures=_faceFeatures - In the implementation block
@property (nonatomic,copy,readonly) NSArray * uncroppedFaceFeatures;                    //@synthesize uncroppedFaceFeatures=_uncroppedFaceFeatures - In the implementation block
@property (nonatomic,copy) NSArray * tagsEdges;                                         //@synthesize tagsEdges=_tagsEdges - In the implementation block
@property (nonatomic,readonly) FBGLFilter * appliedNonLuxFilter; 
@property (nonatomic,readonly) char layeredFilterApplied; 
@property (nonatomic,readonly) char anyFilterApplied; 
@property (nonatomic,readonly) char luxApplied; 
@property (nonatomic,readonly) char isFaceFeaturesAvailable; 
@property (nonatomic,retain) FBCPUImageFilterState * cpuFilterState;                    //@synthesize cpuFilterState=_cpuFilterState - In the implementation block
@property (nonatomic,readonly) char isCPUFilterApplied; 
@property (nonatomic,readonly) char isAutoEnhanceApplied; 
@property (nonatomic,readonly) char hasPhotoOverlayAttachments; 
@property (nonatomic,retain) UIImage * photoOverlayAttachmentsLayer;                    //@synthesize photoOverlayAttachmentsLayer=_photoOverlayAttachmentsLayer - In the implementation block
@property (nonatomic,copy) NSArray * photoOverlays;                                     //@synthesize photoOverlays=_photoOverlays - In the implementation block
@property (nonatomic,readonly) char hasDoodles; 
@property (nonatomic,retain) UIImage * doodlesLayer;                                    //@synthesize doodlesLayer=_doodlesLayer - In the implementation block
@property (nonatomic,copy,readonly) FBPhotoAssetEdits * preCPUFilterEdits; 
@property (assign,nonatomic) char isCollage;                                            //@synthesize isCollage=_isCollage - In the implementation block
@property (assign,nonatomic) char isLivePhotoEnabled;                                   //@synthesize isLivePhotoEnabled=_isLivePhotoEnabled - In the implementation block
@property (assign,nonatomic) char is360PhotoEnabled;                                    //@synthesize is360PhotoEnabled=_is360PhotoEnabled - In the implementation block
@property (nonatomic,copy) NSString * sphericalParameters;                              //@synthesize sphericalParameters=_sphericalParameters - In the implementation block
+(id)propertiesToSkipForCoding;
-(char)isPhotoCropped;
-(NSArray *)tagsEdges;
-(void)setTagsEdges:(NSArray *)arg1 ;
-(char)isLivePhotoEnabled;
-(id)copyForUpload;
-(char)is360PhotoEnabled;
-(NSString *)sphericalParameters;
-(char)anyFilterApplied;
-(char)hasPhotoOverlayAttachments;
-(char)hasDoodles;
-(NSArray *)photoOverlays;
-(FBGLFilter *)appliedNonLuxFilter;
-(char)luxApplied;
-(FBCPUImageFilterState *)cpuFilterState;
-(char)isEqualToEditsIgnoringTags:(id)arg1 ;
-(NSArray *)faceFeatures;
-(UIImage *)doodlesLayer;
-(FBPhotoCropInfo *)cropInfo;
-(UIImage *)photoOverlayAttachmentsLayer;
-(void)setCpuFilterState:(FBCPUImageFilterState *)arg1 ;
-(UIImage *)thumbnailPreFilter;
-(void)setCropInfo:(FBPhotoCropInfo *)arg1 ;
-(char)isFaceFeaturesAvailable;
-(char)isAutoEnhanceApplied;
-(char)isCPUFilterApplied;
-(char)isCollage;
-(void)setIs360PhotoEnabled:(char)arg1 ;
-(void)removeTagsEdge:(id)arg1 ;
-(void)encodeSelectedFilterIDsAndCropInfo:(id)arg1 ;
-(void)decodeSelectedFilterIDsAndCropInfo:(id)arg1 ;
-(NSArray *)selectedFilters;
-(FBPhotoAssetEdits *)preCPUFilterEdits;
-(void)setIsLivePhotoEnabled:(char)arg1 ;
-(void)setThumbnailStandard:(UIImage *)arg1 ;
-(UIImage *)thumbnailFiltered;
-(UIImage *)thumbnailCropped;
-(void)setSphericalParameters:(NSString *)arg1 ;
-(void)setSelectedFilters:(NSArray *)arg1 ;
-(char)layeredFilterApplied;
-(void)setPhotoOverlayAttachmentsLayer:(UIImage *)arg1 ;
-(void)updatePhotoOverlayWithCropInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCropInfoAndUpdateTags:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPhotoOverlays:(NSArray *)arg1 ;
-(void)setDoodlesLayer:(UIImage *)arg1 ;
-(void)setThumbnailFiltered:(UIImage *)arg1 ;
-(NSArray *)uncroppedFaceFeatures;
-(void)setThumbnailCropped:(UIImage *)arg1 ;
-(void)setIsCollage:(char)arg1 ;
-(UIImage *)thumbnailStandard;
-(void)setFaceFeatures:(NSArray *)arg1 ;
-(unsigned)_indexOfTagsEdgeWithSameNode:(id)arg1 ;
-(id)_updatedPhotoOverlaysFromPreviousCoordinates:(id)arg1 toCurrentCoordinates:(id)arg2 ;
-(void)_updateTagLocationsFromPreviousCoordinates:(id)arg1 toCurrentCoordinates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGPoint)_checkAndAdjustTagCoordinates:(CGPoint)arg1 ;
-(CGAffineTransform)_getTransformToStandardWithOrigin:(CGPoint)arg1 xPoint:(CGPoint)arg2 yPoint:(CGPoint)arg3 ;
-(CGAffineTransform)_totalTransformFromPreviousCropInfo:(id)arg1 toCurrentCropInfo:(id)arg2 ;
-(CGRect)_applyTransform:(CGAffineTransform)arg1 withFaceRectValue:(CGRect)arg2 ;
-(CGRect)_applyTransform:(CGAffineTransform)arg1 stickerRectValue:(CGRect)arg2 ;
-(void)addTagsEdge:(id)arg1 ;
-(void)updateTagsEdge:(id)arg1 withTagsEdge:(id)arg2 ;
-(id)photoOverlaysForCropInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


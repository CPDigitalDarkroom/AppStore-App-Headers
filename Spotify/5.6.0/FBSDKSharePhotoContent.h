/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/FBSDKSharingContent.h>

@class NSURL, NSArray, NSString;

@interface FBSDKSharePhotoContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	NSArray* _photos;

}

@property (nonatomic,copy) NSArray * photos;                        //@synthesize photos=_photos - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                      //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                     //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                      //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                          //@synthesize ref=_ref - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)peopleIDs;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(char)isEqualToSharePhotoContent:(id)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end


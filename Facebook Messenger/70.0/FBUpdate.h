/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDate;

@interface FBUpdate : NSObject {

	NSString* _name;
	NSString* _buildNumber;
	NSString* _bundleIdentifier;
	NSString* _releaseNotes;
	NSString* _version;
	NSURL* _itmsURL;
	NSURL* _downloadURL;
	NSString* _releaseTag;
	NSString* _releaseChannel;
	NSDate* _publicationDate;
	unsigned _archiveSize;
	unsigned _uncompressedArchiveSize;
	unsigned _type;
	unsigned _networkRequirements;
	unsigned _retryInterval;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * buildNumber;                          //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * releaseNotes;                         //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,copy) NSString * version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSURL * itmsURL;                               //@synthesize itmsURL=_itmsURL - In the implementation block
@property (nonatomic,retain) NSURL * downloadURL;                           //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,copy) NSString * releaseTag;                           //@synthesize releaseTag=_releaseTag - In the implementation block
@property (nonatomic,copy) NSString * releaseChannel;                       //@synthesize releaseChannel=_releaseChannel - In the implementation block
@property (nonatomic,copy) NSDate * publicationDate;                        //@synthesize publicationDate=_publicationDate - In the implementation block
@property (assign,nonatomic) unsigned archiveSize;                          //@synthesize archiveSize=_archiveSize - In the implementation block
@property (assign,nonatomic) unsigned uncompressedArchiveSize;              //@synthesize uncompressedArchiveSize=_uncompressedArchiveSize - In the implementation block
@property (assign,nonatomic) unsigned type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned networkRequirements;                  //@synthesize networkRequirements=_networkRequirements - In the implementation block
@property (assign,nonatomic) unsigned retryInterval;                        //@synthesize retryInterval=_retryInterval - In the implementation block
+(id)updateFromGraphQueryResult:(id)arg1 ;
+(id)_updateFromQueryResult:(id)arg1 valuesToMap:(id)arg2 downloadUrlKey:(id)arg3 ;
+(id)updateFromEndpointResponse:(id)arg1 ;
+(id)updateFromFQLQueryResult:(id)arg1 ;
-(char)_isShellKind;
-(char)_isAutoUpdaterKind;
-(char)_isVersionKind;
-(char)isShellUpdate;
-(char)_isCurrentAppUpdateKind;
-(NSString *)releaseChannel;
-(unsigned)networkRequirements;
-(char)isMoreRecentThanBundle:(id)arg1 ;
-(char)isSameBundleAs:(id)arg1 ;
-(char)canDownloadOnNetwork:(unsigned)arg1 ;
-(char)isMoreRecentThan:(id)arg1 ;
-(char)isMoreRecentThanCurrentApp;
-(char)isSameBundleAsCurrentApp;
-(void)setItmsURL:(NSURL *)arg1 ;
-(NSString *)releaseTag;
-(void)setReleaseTag:(NSString *)arg1 ;
-(void)setReleaseChannel:(NSString *)arg1 ;
-(void)setArchiveSize:(unsigned)arg1 ;
-(unsigned)uncompressedArchiveSize;
-(void)setUncompressedArchiveSize:(unsigned)arg1 ;
-(void)setNetworkRequirements:(unsigned)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(NSURL *)itmsURL;
-(unsigned)uniqueIdentifier;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(unsigned)kind;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(NSURL *)downloadURL;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(void)setBuildNumber:(NSString *)arg1 ;
-(unsigned)retryInterval;
-(void)setRetryInterval:(unsigned)arg1 ;
-(NSDate *)publicationDate;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(NSString *)releaseNotes;
-(void)setReleaseNotes:(NSString *)arg1 ;
-(unsigned)archiveSize;
@end

